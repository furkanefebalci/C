#include<stdio.h>

int main() {
	
   int a, b, c, d, e,f;
   float aritmetik;
   
   printf("6 tane sayi giriniz:");
   
   scanf("%d %d %d %d %d %d", &a ,&b ,&c ,&d ,&e ,&f);
   
   aritmetik = (a + b + c + d + e + f) / 6.0;
   
   printf("Girdiginiz sayilarin aritmetik ortalamasi. %.2f", aritmetik);
   
   /* 
   Bu program� tan�mlarsak;
   ilk ba�ta 6 tane int karakteri
   float aritmetik bu sonu� i�in 
   sonras�nda say�lar�m�z tam say� olaca��n i�in %d
   kullan�c�n�n 6 tane say� girmesi i�in  ise her say�y� tan�mlama
   /6 yapt�m toplam b�l� terim say�s� aritmetik ortalamay� verir
   printf ilede ekrana say� ortalamas�n� yazd�rd�m.
   */
   return 0;
}




