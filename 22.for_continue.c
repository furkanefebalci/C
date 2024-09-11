#include<stdio.h>
//continue devam etmek demek

int main () {
	
	int toplam = 0;
	
	int i;
	
	for(i = 1 ; i <= 10; i++) {
		
		
		if(i % 2 == 1){ //i'nin 2 ile bölümünden kalan 1 ise bu sayý tek demektir
		    
		    continue;
     	}
     	
     	toplam += i;

	}
	printf("%d", toplam);
/*
Eðer i tek sayý ise (i % 2 == 1), continue komutu çalýþýr.
continue komutu, döngüdeki geri kalan kodlarý atlar ve döngü bir sonraki iterasyona geçer.
Yani, toplam += i; satýrý çalýþtýrýlmaz ve tek sayýlar toplama eklenmez.
*/
    return 0;
}
