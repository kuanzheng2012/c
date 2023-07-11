#include <stdio.h>
 
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;

	scanf("%d %d", &a, &b);

	c = a + b - 16;
	printf("%d\n",c);
        c = a + b - 3;
        printf("%d\n",c);    
        c = a + b - 1; 
        printf("%d\n",c);
        c = a + b;
        printf("%d\n",c);       
	return 0 ;
}                
