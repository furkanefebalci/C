#include <stdio.h>
/* Matris:

 3 5 1 3 2
 4 4 4 5 5 
 9 8 9 7 7

 sonuc: 16 17 14 15 14

*/
int main() {
    int matris[3][5];
    int i, j;

    // Kullanýcýdan matris elemanlarýný almak için döngü
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 5; j++) {
            scanf("%d", &matris[i][j]); // & iþareti ile matris elemanýna adresini geçiyoruz
        }
    }

    // Matris elemanlarýný yazdýrmak için döngü
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 5; j++) {
            printf("%d ", matris[i][j]); // Elemanlar arasýnda boþluk býrakmak daha okunabilir
        }    
        printf("\n"); // Her satýrdan sonra yeni satýra geç
    }

    return 0;
}

// detaylý tekrar yap matris için



