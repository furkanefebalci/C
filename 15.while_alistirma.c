#include<stdio.h>

int main() {
	
	int n;
	int fact = 1;
	
	printf("Faktoriyel istediginiz sayiyi giriniz:");
	scanf("%d", &n);
	
	while (n != 0) { //n eþit deðildir 0 demek bu 
		            // n 0 olmadýðý sürece çalýþýr demek ayný zamanda önemli!!
		printf ("%d\n",n); 
		fact = fact *n; // Faktöriyel hesaplama: fact deðiþkeni 'n' ile çarpýlýr
	   /* Mesela kullanýcý 4 girer ise 
	   fact = fact *n 
	   4 = 1 * 4     demek oluyo.
	   iþlem devamýnda n 1 azaltýrlýr 
	   fact 4 þu anda ve n 3 
	   4 * 3 = fact 
	   fact 12
	   12 * 2 = fact
	   fact 24 
	   24.1= fact 
	   ve iþlem bitti.
	   */
		n--;
		//n-- girilen sayýdan atýyorum 4, her seferinde 1 ekilmesini saðlýyor
		
	}
	printf("Sonuc: %d", fact);

	return 0;
}
