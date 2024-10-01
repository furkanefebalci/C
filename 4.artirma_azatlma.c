#include<stdio.h>

/*
printf("x:%d\ny:%d\na:%d\n",x,y,a); 
tanýmý:

x;tam sayý yazdýrma
\n alt satýr
y:%d tam sayý yazdýrma
\n alt satýr
a:%d tam sayý yazdýrma

x,y,a sýrasýyla yazdýrma
x,y,a olunca deðerler düzgün olur 
ama 
x,a,y
yaptigimda a'nin degeri y'ye y nin degeri ise a ya geçer

*/

/* X = y dendiginde sagdaki kismi sola entegre eder 

Örnek:
int x= 12;

int y = 13;

x = y;

    printf("%d\n",x+y);

     sonuç: 26
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
    
  
	
	/* bir sayiyi arttirmak için x = x + 1 
	   bir sayiyi azaltmak için ise x = x - 1
	 */

	//Kisa yollar 
	//postfix : i++ i ye hangi sayi atanmissa o sayiyi ekrana yazar
	//prefix  : ++i i ye hangi sayý atanmissa o sayinin 1 fazlasini ekrana yazar
	
	int i = 2;
	int b = i++; // i++ bu i = i + x demek (x) i'ye taninan tam sayi
	printf("b = %d\n",b);
	printf("i= %d\n",i);
	
	
	i = 2;
	b = ++i;
	printf("b = %d\n",b);
	printf("i= %d\n",i);
	
	return 0;
}
