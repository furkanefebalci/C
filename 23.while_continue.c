#include<stdio.h>
//continue devam etmek demek

int main () {
	
	int toplam = 0;
	
	int i;
	
	while(i <= 10 ) {
		
		
		if(i % 2 == 1){ 
		    i++;
		    continue;
     	}
     	
     	toplam += i;
     	i++;

	}
	// continue üzerine i++; yapmaz isem döngü 1 defa çalýþýr 1 olur ve bir daha dönmez
	printf("%d", toplam);

    return 0;
}
