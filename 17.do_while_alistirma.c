#include<stdio.h>
int main () {
	/*
	1234 rakamlar toplam� ka� haneli oldu�nu 
	
	
	

	
	*/
	int n, hane = 0,toplam =0;
	
	printf("Sayiyi giriniz:");
	scanf ("%d",&n);
	
	do {
		
		toplam += (n % 10); // Rakamlar� toplar
		/* 
		bu 1234 say�s�n� 10 b�ler
		4 kalan�n� buluruz sonras�nda 
		123 say�s�n� b�ler 3 
		12 yi b�ler 2
		1'i b�ler
		0 kal�r bu kalanlar�n hepsi topland���nda ise 
		basamak hanelerin toplam�n� bulmu� oluruz 
		*/
		
		hane++; 
		// Hane say�s�n� art�r�r 
		//n'ka� basamak i�erdi�ini sayar
		
		n= n/10; // Son rakam� kald�r�r
		
		
	}
	while(n > 0);
	
	printf("Rakamlarin Toplami: %d ve %d haneli ",toplam,hane);


	return 0;
}
