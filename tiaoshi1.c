#include <stdio.h>
 
int main()
{
	int price1 = 0;
	int price2 = 0;

        printf("请输入交的金额（元）:");
	scanf("%d", &price2);
        printf("请输入金额（元）:");
        scanf("%d", &price1);
	
	printf("\nprice2=%d price1=%d\n",price2,price1);

	int change = price2 - price1;

	printf("找您%d元\n",change);
 
        return 0;
}
