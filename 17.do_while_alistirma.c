#include<stdio.h>
int main () {
	/*
	1234 rakamlar toplamý kaç haneli olduðnu 
	
	
	

	
	*/
	int n, hane = 0,toplam =0;
	
	printf("Sayiyi giriniz:");
	scanf ("%d",&n);
	
	do {
		
		toplam += (n % 10); // Rakamlarý toplar
		/* 
		bu 1234 sayýsýný 10 böler
		4 kalanýný buluruz sonrasýnda 
		123 sayýsýný böler 3 
		12 yi böler 2
		1'i böler
		0 kalýr bu kalanlarýn hepsi toplandýðýnda ise 
		basamak hanelerin toplamýný bulmuþ oluruz 
		*/
		
		hane++; 
		// Hane sayýsýný artýrýr 
		//n'kaç basamak içerdiðini sayar
		
		n= n/10; // Son rakamý kaldýrýr
		
		
	}
	while(n > 0);
	
	printf("Rakamlarin Toplami: %d ve %d haneli ",toplam,hane);


	return 0;
}
