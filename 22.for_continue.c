#include<stdio.h>
//continue devam etmek demek

int main () {
	
	int toplam = 0;
	
	int i;
	
	for(i = 1 ; i <= 10; i++) {
		
		
		if(i % 2 == 1){ //i'nin 2 ile b�l�m�nden kalan 1 ise bu say� tek demektir
		    
		    continue;
     	}
     	
     	toplam += i;

	}
	printf("%d", toplam);
/*
E�er i tek say� ise (i % 2 == 1), continue komutu �al���r.
continue komutu, d�ng�deki geri kalan kodlar� atlar ve d�ng� bir sonraki iterasyona ge�er.
Yani, toplam += i; sat�r� �al��t�r�lmaz ve tek say�lar toplama eklenmez.
*/
    return 0;
}
