#include<stdio.h>
#include <stdbool.h> //true false i�in

int main(){
	
	int toplam = 0;
	
	int i;
	
	int sayi;
	
	for(i = 0 ; true;i++){ //Bu d�ng� true oldu�u s�rece s�rekli olarak �al��acakt�r (yani sonsuz d�ng�).
		printf("Sayiyi Giriniz: (Cikmak icin -1 basin)");
		scanf("%d", &sayi);
		
		if (sayi == -1) { // bu olmaz ise d�ng� hep devam eder ve toplama i�lemi asla gelmez
			break;
		}
		toplam +=sayi;
	}
	printf("%d",toplam);
	
	return 0;
}
