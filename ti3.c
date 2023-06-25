#include <stdio.h>
 
int main()
{
	double di = 0;
	double gao = 0;

        printf("请输入底（米）:");
	scanf("%lf", &di);
        printf("请输入高（米）:");
        scanf("%lf", &gao);

	double mianji = di * gao / 2;

	printf("\n等于%f平方米\n",mianji);
 
        return 0;
}
