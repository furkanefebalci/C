#include<stdio.h>
int main (){
	
	/*
	d�ng�y� baslatma
	 
	 do {
	 
	 i�lemler
	 
     }
     while(kosul)
     */
     
     int n =10;
     
     do{ // do blo�u �al��t���nda n de�eri ekrana yaz�l�r.

     printf("%d\n",n);
    
    n--;
    
	}
	while (n > 0);
    /*
    �stteki dizide do bol�u �al��t�r�yor 
    ve printf n-- ile s�rekli eksilterek 
    ekrana yaz�yor taaki n = 0 olana dek 
    */

 	return 0;
}
