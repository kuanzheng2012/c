 #include <stdio.h>
  
 int main()
 {
        int x = 0;
	int left = 0;

        scanf("%d", &x);
 
        left = 1;
        left = (float)(left+1)/(1-(float)x/100);
	left = (float)(left+1)/(1-(float)x/100); 
	left = (float)(left+1)/(1-(float)x/100); 

        printf("The monkey taken %d peaches at the first day.",left);
 
        return 0;
 }
