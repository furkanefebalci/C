#include<stdio.h>
int faktoriyel(int sayi){
	
	int fact = 1;
	
	for (;sayi>0 ; sayi--){
		
	/* Normalde 
	(i = 5; sayi >0 falan yapard�k ama 
	a�a��da kullan�c�dan say�y� al�ca��m i�in sabit 
	bir de�er olmad��� i�in, buray� bo� b�rakt�m.
	*/	
		fact *= sayi;
	
	}
	return fact;
	// d�� d�nyaya aktarma diyor sor.
	

}
int main () {

    int n;
    
    printf("Faktoriyel istediginiz sayiyi giriniz:");
    
    scanf("%d",&n);
    
    printf ("faktoriyel :%d",faktoriyel(n));
    //faktoriyel(n) say�y� ald���m yer 
    
	
}
