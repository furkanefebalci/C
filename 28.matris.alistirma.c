#include <stdio.h>
//Bu proje sayýlarý 3x3 bir kare þeklide diziyor

int main() {
    int matris[3][3];
    int i, j;
     //(i): Satýr 
	 //(j): Sütun 
    // Kullanýcýdan matrisin elemanlarýný okuma
    printf("Matrisin elemanlarini girin:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("matris[%d][%d]: ", i, j);
            scanf("%d", &matris[i][j]);
            /*
            Dýþ Döngü (i): Satýr indeksini kontrol eder ve 0'dan 2'ye kadar döner.
            Ýç Döngü (j): Sütun indeksini kontrol eder ve 0'dan 2'ye kadar döner. 
            */
        }
    }

    // Matrisin elemanlarýný yazdýrma
    printf("Matrisin elemanlari:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matris[i][j]);
        }
        printf("\n");
    }

    return 0;
}
/* 
Program þöyle çalýþýyor sana diyorki 
matris[0][0]: kýsmýna ne koyayým diyor sen 1 diyorsun mesela
matris[0][1]: buraya ne koyayým 2 diyorsun böyle devam ediyor 
matris[0][2]: 3
matris[1][0]: 4
matris[1][1]: 5
matris[1][2]: 6
matris[2][0]: 7
matris[2][1]: 8
matris[2][2]: 9

sonuç: 1 2 3 
       4 5 6 
       7 8 9 
       
bu program indexe göre sayý yerleþtirmeye yarýyor.
*/
