#include <stdio.h>
 
int main()
{
	double di = 0;
	double gao = 0;

        printf("请输入长（米）:");
	scanf("%lf", &di);
        printf("请输入宽（米）:");
        scanf("%lf", &gao);

	double mianji = di * gao;

	printf("\n等于%f平方米\n",mianji);
 
        return 0;
}
