#include<stdio.h>
//array (sýralamak) demek

int main (){
	// Bir tam sayý 
	int sayilar[]= {1,2,3,4,5};
	int i = 0;    //0,1,2,3,4 iþleyiþ arka planda böyledir 
	
	for(; i < 5 ; i++ ){
		printf("%d\n", sayilar[i]);
		
	//bütün sayýlarý  ekrana yazmak için for veya while kullanman lazým 
	
	
	/*
	tek bir yazý almak için ise printf("%d\n" sayilar[]); yazman lazým
	ve hangi indexteki sayýyý alýcaksan onun sýrasýný yazman lazým
	mesela sayilar[2] yazdým bana 3 ü verir
	sayilar[4] yazdým bana 5 verir.
	*/

	}
	return 0;
}
