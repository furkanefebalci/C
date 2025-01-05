#include<stdio.h>

int main() {
   int a, b, c, d, e, f;
   float aritmetik;
   
   printf("6 tane sayi giriniz:");
   
   scanf("%d %d %d %d %d %d", &a ,&b ,&c ,&d ,&e ,&f);
   
   aritmetik = (a + b + c + d + e + f) / 6.0;
   
   printf("Girdiginiz sayilarin aritmetik ortalamasi. %.2f", aritmetik);
   return 0;
}




