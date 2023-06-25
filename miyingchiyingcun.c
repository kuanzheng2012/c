#include <stdio.h>
  
int main()
{
        double price1 = 0;
	double price2 = 39.3700787;
	double price3 = 3.2808399;

        printf("请输入米:");
        scanf("%lf", &price1);
 
        double change1 = price1 * price2;
	double change2 = price1 * price3;

        printf("\n等于%lf英尺\n",change2);
        printf("\n等于%lf英寸\n",change1);
 
        return 0;
}
