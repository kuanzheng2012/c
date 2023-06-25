#include <stdio.h>
 
int main()
{
	double duoshao = 0;

        printf("请输入几边形（多变形）:");
        scanf("%lf", &duoshao);

	double mianji = (duoshao - 2) * 180;

	printf("\n内角和是%f度\n",mianji);
 
        return 0;
}
