#include<stdio.h>

int asal_mi(int sayi ){
	
	
	int i;
	
	for (i= 2 ; i < sayi ; i++){
		if(sayi % i == 0 ){
	//bu k�s�m e�er say� 2 ye tam b�l�n�r ise asal de�il, b�l�nmez ise asald�r demek i�in 
			
			return 0;
		}
	}
	return 1;
		
}	
		
int main (){	
	int n;
	
	printf("Bir Sayi Giriniz:");
	
	scanf("%d", &n);
	
	if (asal_mi(n) == 0 ){
		printf("Bu Sayi Asal Degildir.");
	
	}
	else{
		printf("Bu Sayi Asal Sayidir.");	
	}

}

//return k�sm� i�in yard�m al
