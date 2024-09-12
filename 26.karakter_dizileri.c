#include<stdio.h>

int main (){
	// char %c ile yazýlýr
	char isim[20];
	            
	
	printf("isminizi girin:");
	scanf("%s",isim);
	
	// %s karakter dizi okumak için bunu yazdým 
	// scanf ismimi Furkan Efe Balcý olarak yazdýðýmda ilk boþluða kadar alýyor

	printf("isminizi girin : %s", isim);
	
	return 0;
}
