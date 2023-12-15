#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define MAP_SIZE 40

/*
	定义上下左右四个方向的命令 
	1上 2下 3左 4右 
*/
#define UP       1
#define LEFT     2
#define DOWN     3
#define RIGHT    4

/*
	定义地图一张 g_map 10*10 
	蛇的长度 g_snake_legnth
	定义命令 g_cmd:移动的命令 
	定义食物的位置  g_food_x 和  g_food_y 
	定义贪吃蛇头部位置 
*/
int g_map[MAP_SIZE][MAP_SIZE] = {0};
int g_snake_legnth; 
int g_cmd; 
int g_food_x,g_food_y;
int g_head_x,g_head_y;
int g_end_x,g_end_y;


/*
	生成随机数 食物的位置 食物被吃掉之后重新生成 
	设置随机数种子
	生成0-MAP_SIZE-1的随机数 
*/
void Rand_food_addr()
{
	do{
		srand((unsigned)time(NULL));
		g_food_x = rand()%(MAP_SIZE-2)+1;
		g_food_y = rand()%(MAP_SIZE-2)+1;	
	}while(g_map[g_food_x][g_food_y]!=0);
	g_map[g_food_x][g_food_y]=-1;
}

/*
	参数初始化 
	初始长度为:3
	初始方向:上 
*/

void Snake_init()
{
	g_snake_legnth = 3;
	g_cmd          = UP;
	g_head_x       = 5;
	g_head_y       = 4; 
	g_map[5][4]    = 1;
	g_map[6][4]    = 2;
	g_map[7][4]    = 3;
	Rand_food_addr();
} 

void gotoxy(int x, int y)
{
	COORD pos;
	HANDLE hOutput;
	pos.X = x;
	pos.Y = y;
	hOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hOutput, pos);
}

/*
	从控制台获取命令 
*/
void Sanke_get_cmd()
{
	int data = 0;
	if(_kbhit())
	{
		switch(_getch())
		{
			case 'w':
				data = UP;
				break;
			case 's':
				data = DOWN;
				break;
			case 'a':
				data = LEFT;
				break;
			case 'd':
				data = RIGHT;
				break;
		}
		if(data!=0&&abs(g_cmd-data)!=2)
		{
			g_cmd = data;
		}
	}
} 

int Snake_move()
{
	int i,j,flag=0;//flag标记是否吃到食物 
	switch(g_cmd)
	{
		case UP:
			--g_head_x; 
			break;
		case DOWN:
			++g_head_x;
			break;
		case LEFT:
			--g_head_y;
			break;
		case RIGHT:
			++g_head_y;
			break;
	}
	//吃到食物 
	if(g_map[g_head_x][g_head_y]==-1) 
	{
		++g_snake_legnth;
		g_map[g_head_x][g_head_y]=1;
		flag=1;
		Rand_food_addr();//生成食物 
		gotoxy(g_food_y,g_food_x);
		printf("@");
	} 
	else if(g_map[g_head_x][g_head_y]>1)//吃到自己 
	{
		return 0; 
	} 
	else if(g_head_x==0||g_head_x==MAP_SIZE-1||g_head_y==0||g_head_y==MAP_SIZE-1)//撞到边框
	{
		return 0;
	} 
	else
	{
		g_map[g_head_x][g_head_y]=1; //蛇头新位置 
	}
	//动画显示蛇头部分 
	gotoxy(g_head_y,g_head_x);
	printf("O");
	
	for(i=0; i<MAP_SIZE; i++)
	{
		for(j=0; j<MAP_SIZE; j++)
		{
			if(g_map[i][j]==0||g_map[i][j]==-1)
				continue;
			else if(g_map[i][j]==g_snake_legnth-1&&flag==1)//如果吃到食物 长度加一  
			{
				g_map[i][j]=g_snake_legnth;
				gotoxy(j,i);
				printf("O");
			}
			else if(g_map[i][j]==g_snake_legnth)//如果没有吃到食物 正常移动 尾部输出空格 
			{
				g_map[i][j]=0;
				gotoxy(j,i);
				printf(" ");
			}
			else if(g_map[i][j]>0)
			{
				if(i==g_head_x&&j==g_head_y)
					continue;
				else
					g_map[i][j]++;	
			}	
		}	
	} 
	return 1;
}

void Sanke_draw()
{
	int i,j;
	system("cls");
	for(i=0; i<MAP_SIZE; i++)
	{
		for(j=0; j<MAP_SIZE; j++)
		{
			if(i==0||j==0||i==MAP_SIZE-1||j==MAP_SIZE-1)
			{
				printf("*");
			}
			else if(g_map[i][j]>0)
				printf("O");
			else if(g_map[i][j]==-1)
				printf("@");
			else
				printf(" ");
		}
		printf("\n");
	}
}

void Snake_Start(int speed)
{
	Snake_init();
	Sanke_draw();
	while(1)
	{
		Sanke_get_cmd();
		if(Snake_move()!=1)
		{
			printf("Game Over\n");
			break;
		}
		Sleep(speed);
	}
} 

void Sanke_End()
{
	system("cls");
	printf("Game Over\n");
}

int main()
{
	while(1)
	{	
		Snake_Start(200);
	}
	return 0;
}

