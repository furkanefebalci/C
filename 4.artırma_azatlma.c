#include<stdio.h>

/*
printf("x:%d\ny:%d\na:%d\n",x,y,a); 
tan�m�:

x;tam say� yazd�rma
\n alt sat�r
y:%d tam say� yazd�rma
\n alt sat�r
a:%d tam say� yazd�rma

x,y,a s�ras�yla yazd�rma
x,y,a olunca de�erler d�zg�n olur 
ama 
x,a,y
yapt���mda a'n�n de�eri y ye y nin de�eri ise a ya ge�er

*/

/* X = y dendi�inde sa�daki k�sm� sola entegre eder 

�rnek:
int x= 12;

int y = 13;

x = y;

    printf("%d\n",x+y);

     onu�: 26
*/

    int main() {
	
	int x = 4;
	int y = 6;
	int a = 7;
	
	x = y;
	
	
	y = x + a+ +2;

	
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
     
     
    x=4;
    y=14;
    a=7;
    
     /*
     x=4 a=7
    
    x+ (a + 1 ) = x += a+1;
    
    =12
     */
     
     
     x += a+1;
     
     printf("%d\n",x);
     
     
     x = y = a+4;
     
     printf("x:%d\ny:%d\na:%d\n",x,y,a);
    
  
	
	/* bir say�y� artt�rmak i�in x = x+1 
	   bir say�y� azaltmajk i�in ise x = x-1
	 */

	//K�sa yollar 
	//postfix : i++ i ye hangi say� atanm��sa o say�y� ekrana yazar
	//prefix  : ++i i ye hangi say� atanm��sa o say�n�n 1 fazlas�n� eknara yazar
	
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
