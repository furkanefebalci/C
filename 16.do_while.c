#include<stdio.h>
int main (){
	
	/*
	döngüyü baslatma
	 
	 do {
	 
	 iþlemler
	 
     }
     while(kosul)
     */
     
     int n =10;
     
     do{ // do bloðu çalýþtýðýnda n deðeri ekrana yazýlýr.

     printf("%d\n",n);
    
    n--;
    
	}
	while (n > 0);
    /*
    Üstteki dizide do bolðu çalýþtýrýyor 
    ve printf n-- ile sürekli eksilterek 
    ekrana yazýyor taaki n = 0 olana dek 
    */

 	return 0;
}
