#include <stdio.h>

// uygun hassasiyet bulma programý 
int main () {
	
	
	int x;
	
	printf("Ekrana hassasiyetinizi giriniz.\n");
	scanf("%d", &x);
	
	
	if(x >= 10) {
		
		printf("Hassiyetiniz yüksek.");
	}
	else if (x >= 7){
		
		printf("normal.");
	}
	else if (x >= 4 ){
		printf("Hassiyetiniz dusuk");
	}
	else {  
	
	printf("Hassiyetiniz cok dusuk");
	
	}

	return 0;
	
	
	/*
	Bu programda önce x i tanýdým 
	sonrasýnda x e koþul saðladým 
	ekrana yazýlacak sayý için baþlýk oluþturdum (printf)
	daha sonrasýnda scanf yani kullanýcýn sayý gireceði düzeneði yazdým
	%d tam sayý gireceðini belirtir
	&(x) kullanýcýnýn ekrana yazacaðý sayý
	ilk baþta if ekledým eðer if doðru çýkmassa diye tekrar denemesi için
	else ifler ekledim  
	sayý 10 dan büyük veya eþit ise yüksek diyecek
	sayý 10 ve 7 arasýnda veya 7 ye eþit ise normal diyecek
	sayý 7 den küçük 4 veya 4 eþit ise dusuk diyecek
	sayý 4 den de küçük ise else devreye girecek ve program bitecek ekrana ise
	çok dusuk yazýsýný basacak
	*/
}
