#include <stdio.h>
 
int main()
{
	const int MINOR = 35;
	double age = 0;

        printf("请输入你的年龄（几岁）:");
	scanf("%lf", &age);

	printf("你的年龄是%f岁\n",age);
 
	if( age < MINOR ) {
	printf("年轻是美好的，");
	}

	printf("年龄决定了你的精神世界，好好珍惜吧。\n");

        return 0;
}
