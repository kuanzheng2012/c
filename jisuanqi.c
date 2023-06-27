#include <stdio.h>


int main()
 {
	 char fu;
         printf("请输入符号:");
         scanf("%c", &fu);

         if ( fu == '+'  ){
       	         double price1 = 0;
        	 double price2 = 0;
 
	         printf("请输入加数1:");
        	 scanf("%lf", &price2);
        	 printf("请输入加数2:");
    		 scanf("%lf", &price1);
 
	         double change = price2 + price1;
 
        	 printf("\n等于%f\n",change);
 
     	 	 return 0;

	}

         else if ( fu == '-'  ){
	         double price1 = 0;
        	 double price2 = 0;
 
      		 printf("请输入被减数:");
        	 scanf("%lf", &price2);
        	 printf("请输入减数:");
        	 scanf("%lf", &price1);
 
      		 double change = price2 - price1;
 
        	 printf("\n等于%f\n",change);
 
        	 return 0;

	}


         else if ( fu == '*'  ){
	         double price1 = 0;
        	 double price2 = 0;
 
        	 printf("请输入乘数1:");
        	 scanf("%lf", &price2);
        	 printf("请输入乘数2:");
        	 scanf("%lf", &price1);
 
        	 double change = price2 * price1;
 	
        	 printf("\n等于%f\n",change);
 
        	 return 0;
	}



         else if ( fu == '/'  ){
        	 double price1 = 0;
        	 double price2 = 0;
 
         	printf("请输入被除数:");
        	 scanf("%lf", &price2);
        	 printf("请输入除数:");
        	 scanf("%lf", &price1);
 
        	 double change = price2 / price1;
 
        	 printf("\n等于%f\n",change);
 
        	 return 0; 
	} 
}
