#include <stdio.h>
  
int main()
{
        double price1 = 0;
	double price2 = 0;
	double price3 = 0;
        double price4 = 0;
        double price5 = 0;
        double price6 = 0;
        double price7 = 0;
        double price8 = 0;
        double price9 = 0;
        double price10 = 0;

        printf("请输入平均数1：");
        scanf("%lf", &price1);
        printf("请输入平均数2：");
        scanf("%lf", &price2);
        printf("请输入平均数3：");
        scanf("%lf", &price3);
        printf("请输入平均数4：");
        scanf("%lf", &price4);
        printf("请输入平均数5：");
        scanf("%lf", &price5);
        printf("请输入平均数6：");
        scanf("%lf", &price6);
        printf("请输入平均数7：");
        scanf("%lf", &price7);
        printf("请输入平均数8：");
        scanf("%lf", &price8);
        printf("请输入平均数9：");
        scanf("%lf", &price9);
        printf("请输入总平均数：");
        scanf("%lf", &price10);

        double change1 = (price10 * 10) - (price1 + price2 + price3 + price4 + price5 + price6 + price7 + price8 + price9);

        printf("\n等于%lf\n",change1);
 
        return 0;
}
