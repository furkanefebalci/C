#include<stdio.h>

int main() {
	
	int n;
	int fact = 1;
	
	printf("Faktoriyel istediginiz sayiyi giriniz:");
	scanf("%d", &n);
	
	while (n != 0) { //n e�it de�ildir 0 demek bu 
		            // n 0 olmad��� s�rece �al���r demek ayn� zamanda �nemli!!
		printf ("%d\n",n); 
		fact = fact *n; // Fakt�riyel hesaplama: fact de�i�keni 'n' ile �arp�l�r
	   /* Mesela kullan�c� 4 girer ise 
	   fact = fact *n 
	   4 = 1 * 4     demek oluyo.
	   i�lem devam�nda n 1 azalt�rl�r 
	   fact 4 �u anda ve n 3 
	   4 * 3 = fact 
	   fact 12
	   12 * 2 = fact
	   fact 24 
	   24.1= fact 
	   ve i�lem bitti.
	   */
		n--;
		//n-- girilen say�dan at�yorum 4, her seferinde 1 ekilmesini sa�l�yor
		
	}
	printf("Sonuc: %d", fact);

	return 0;
}
