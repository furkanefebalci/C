#include<stdio.h>
//Aritmetik ortama 
int main (){
	float toplam=0.0;
	
	float sayilar[5];
	int i;

	for(i= 0 ; i < 5 ; i++){
		printf("Bir sayi giriniz:");
		scanf("%f", &sayilar[i]);	
	}
	
	
	for ( i = 0; i < 5 ; i++) {
		toplam += sayilar[i];
	}
	printf("Girdiginiz sayilarin aritmetik ortalamasi %.2f'dir",toplam / 5);
	return 0;
}
