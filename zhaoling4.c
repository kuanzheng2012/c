#include <stdio.h>
 
int main()
{
	int price1 = 0;
	int price2 = 0;

        printf("请输入交的金额（元）:");
	scanf("%d", &price2);
        printf("请输入金额（元）:");
        scanf("%d", &price1);

	int change = price2 - price1;

	if ( price2 >= price1 ) {
		printf("应该找您：%d\n",change);
	}else{
		printf("你的钱不够\n");
	}
 
        return 0;
}
