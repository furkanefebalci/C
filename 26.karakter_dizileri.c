#include<stdio.h>

int main (){
	// char %c ile yaz�l�r
	char isim[20];// 20 karakter uzunlu�unda bir dizi tan�mlan�yor
	            
	
	printf("isminizi girin:");
	scanf("%s",isim);
	
	// %s karakter dizi okumak i�in bunu yazd�m 
	// scanf ismimi Furkan Efe Balc� olarak yazd���mda ilk bo�lu�a kadar al�yor

	printf("isminizi girin : %s", isim);
	
	return 0;
}
