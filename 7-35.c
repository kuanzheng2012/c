 #include <stdio.h>
  
 int main()
 {
         float price1 = 150;
         float price2 = 200;

         float price3 = 15;
         float price4 = 12;
 
         float change = (price2 + price1)/(price3 + price4);
 
         printf("%.2f seconds.",change);
 
         return 0;
 }
