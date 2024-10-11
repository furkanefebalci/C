#include<stdio.h>
//continue devam etmek demek

int main () {
	
	int toplam = 0;
	
	int i;
	
	while(i <= 10 ) {
		
		if(i % 2 == 1){ // == bu iþaret karþýlarþtýrma iþaretidir unutma!!
		    i++;
		    continue;
     	}
     	
     	toplam += i;// toplam = toplam +i
     	i++;

	}
	// continue üzerine i++; yapmaz isem döngü 1 defa çalýþýr 1 olur ve bir daha dönmez
	//if(i % 2 == 1) kýsaca açýklamak gerekir ise bu i sayýsý 2 ye bölündüðünde çift çýkarsa true tek çýkarsa false olmasý anlamýna geliyor.
	// bu kod kýsaca 10 sayýsýna kadar olan çift sayýlarý topladý (10 sayýsýda dahil).
	printf("%d", toplam);

    return 0;
}
