#include <stdio.h>
  
int main()
{
        double price1 = 0;
	double price2 = 3.2808399;
 
        printf("请输入米:");
        scanf("%lf", &price1);
 
        double change = price1 * price2;

        printf("\n等于%lf英尺\n",change);
 
        return 0;
}
