#include <stdio.h>
  
int main()
{
        double price1 = 0;
	double price2 = 0.3048;
 
        printf("请输入英尺:");
        scanf("%lf", &price1);
 
        double change = price1 * price2;

        printf("\n等于%lf米\n",change);
 
        return 0;
}
