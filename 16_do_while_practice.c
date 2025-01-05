#include<stdio.h>
int main(){
	
	// Girilen sayinin rakamlar toplamý bulan program
	
	int n, hane = 0 ,toplam =0;
	
	printf("Sayiyi giriniz:");
	scanf ("%d",&n);
	
	do{
		
		toplam += (n % 10);
	
		hane++; 

		n /= 10;
		
	}
	while(n > 0);
	
	printf("Rakamlarin Toplami: %d ve %d haneli ",toplam,hane);
	
	return 0;
}
