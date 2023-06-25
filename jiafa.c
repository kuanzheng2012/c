 #include <stdio.h>
  
 int main()
 {
         int price1 = 0;
         int price2 = 0;
 
         printf("请输入加数1:");
         scanf("%d", &price2);
         printf("请输入加数2:");
         scanf("%d", &price1);
 
         int change = price2 + price1;
 
         printf("\n等于%d\n",change);
 
         return 0;
 }
