#include<stdio.h>
//array (s�ralamak) demek

int main (){
	// Bir tam say� 
	int sayilar[]= {1,2,3,4,5};
	int i = 0;    //0,1,2,3,4 i�leyi� arka planda b�yledir 
	
	for(; i < 5 ; i++ ){
		printf("%d\n", sayilar[i]);
		
	//b�t�n say�lar�  ekrana yazmak i�in for veya while kullanman laz�m 
	
	
	/*
	tek bir yaz� almak i�in ise printf("%d\n" sayilar[]); yazman laz�m
	ve hangi indexteki say�y� al�caksan onun s�ras�n� yazman laz�m
	mesela sayilar[2] yazd�m bana 3 � verir
	sayilar[4] yazd�m bana 5 verir.
	*/

	}
	return 0;
}
