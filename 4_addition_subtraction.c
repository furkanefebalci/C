#include<stdio.h>

    int main() {
	
	int x = 4;
	int y = 6;
	int a = 7;
	
	x = y;
	y = x + a + 2;

	printf("x:%d\ny:%d\na:%d\n",x,y,a);
	x=6;
    y=15;
    a=7;
	
	printf("x:%d\ny:%d\na:%d\n",--x,--y,--a);
	x=5;
    y=14;
    a=6;

    printf("x:%d\ny:%d\na:%d\n",--x,++y,++a);
    x=4;
    y=15;
    a=7;
    
    printf("x:%d\ny:%d\na:%d\n",x,y,a);
    x=4;
    y=15;
    a=7;
    
    printf("x:%d\ny:%d\na:%d\n",x--,--y,a--);
      
    x = 4;
    y = 14;
    a = 7;
      
    x += a + 1;
     
    printf("%d\n",x);
    
    x = y = a + 4;
     
    printf("x:%d\ny:%d\na:%d\n",x,y,a);
    
	int i = 2;
	int b = i++;
	printf("b = %d\n",b);
	printf("i= %d\n",i);
	
	
	i = 2;
	b = ++i;
	printf("b = %d\n",b);
	printf("i= %d\n",i);
	return 0;
}
