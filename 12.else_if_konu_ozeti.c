#include <stdio.h>

// uygun hassasiyet bulma program� 
int main () {
	
	
	int x;
	
	printf("Ekrana hassasiyetinizi giriniz.\n");
	scanf("%d", &x);
	
	
	if(x >= 10) {
		
		printf("Hassiyetiniz y�ksek.");
	}
	else if (x >= 7){
		
		printf("normal.");
	}
	else if (x >= 4 ){
		printf("Hassiyetiniz dusuk");
	}
	else {  
	
	printf("Hassiyetiniz cok dusuk");
	
	}

	return 0;
	
	
	/*
	Bu programda �nce x i tan�d�m 
	sonras�nda x e ko�ul sa�lad�m 
	ekrana yaz�lacak say� i�in ba�l�k olu�turdum (printf)
	daha sonras�nda scanf yani kullan�c�n say� girece�i d�zene�i yazd�m
	%d tam say� girece�ini belirtir
	&(x) kullan�c�n�n ekrana yazaca�� say�
	ilk ba�ta if ekled�m e�er if do�ru ��kmassa diye tekrar denemesi i�in
	else ifler ekledim  
	say� 10 dan b�y�k veya e�it ise y�ksek diyecek
	say� 10 ve 7 aras�nda veya 7 ye e�it ise normal diyecek
	say� 7 den k���k 4 veya 4 e�it ise dusuk diyecek
	say� 4 den de k���k ise else devreye girecek ve program bitecek ekrana ise
	�ok dusuk yaz�s�n� basacak
	*/
}
