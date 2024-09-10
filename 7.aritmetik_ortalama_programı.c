#include<stdio.h>

int main() {
	
   int a, b, c, d, e,f;
   float aritmetik;
   
   printf("6 tane sayi giriniz:");
   
   scanf("%d %d %d %d %d %d", &a ,&b ,&c ,&d ,&e ,&f);
   
   aritmetik = (a + b + c + d + e + f) / 6.0;
   
   printf("Girdiginiz sayilarin aritmetik ortalamasi. %.2f", aritmetik);
   
   /* 
   Bu programý tanýmlarsak;
   ilk baþta 6 tane int karakteri
   float aritmetik bu sonuç için 
   sonrasýnda sayýlarýmýz tam sayý olacaðýn için %d
   kullanýcýnýn 6 tane sayý girmesi için  ise her sayýyý tanýmlama
   /6 yaptým toplam bölü terim sayýsý aritmetik ortalamayý verir
   printf ilede ekrana sayý ortalamasýný yazdýrdým.
   */
   return 0;
}




