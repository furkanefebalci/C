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
	// continue �zerine i++; yapmaz isem d�ng� 1 defa �al���r 1 olur ve bir daha d�nmez
	printf("%d", toplam);

    return 0;
}
