#include <stdio.h>
  
int main()
{
    char zifu;
    int zhengshu;
    double xiaoshu;
    int zifuzijieshu;
    int zhengshuzijieshu;
    int xiaoshuzijieshu;

    scanf("%c %d %lf",&zifu,&zhengshu,&xiaoshu);

    zifuzijieshu = sizeof(zifu);
    zhengshuzijieshu = sizeof(zhengshu);
    xiaoshuzijieshu = sizeof(xiaoshu);

    printf("%c,%d\n",zifu,zifuzijieshu);
    printf("%d,%d\n",zhengshu,zhengshuzijieshu);
    printf("%lf,%d\n",xiaoshu,xiaoshuzijieshu);

    return 0;
}

