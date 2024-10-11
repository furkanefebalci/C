#include<stdio.h>
#include <stdbool.h> //true false için

int main(){
	
	int toplam = 0;
	
	int i;
	
	int sayi;
	
	for(i = 0 ; true;i++){ //Bu döngü true olduðu sürece sürekli olarak çalýþacaktýr (yani sonsuz döngü).
		printf("Sayiyi Giriniz: (Cikmak icin -1 basin)");
		scanf("%d", &sayi);
		
		if (sayi == -1) { // bu olmaz ise döngü hep devam eder ve toplama iþlemi asla gelmez
			break;
		}
		toplam +=sayi;
	}
	printf("%d",toplam);
	
	return 0;
}
