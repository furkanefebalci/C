#include<stdio.h>

int asal_mi(int sayi ){
	
	
	int i;
	
	for (i= 2 ; i < sayi ; i++){
		if(sayi % i == 0 ){
	//bu kýsým eðer sayý 2 ye tam bölünür ise asal deðil, bölünmez ise asaldýr demek için 
			
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

//return kýsmý için yardým al
