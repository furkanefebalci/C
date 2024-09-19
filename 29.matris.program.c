#include <stdio.h>

int main() {
    int matris[3][5];
    int i, j;

    // Kullanýcýdan matrisin elemanlarýný okuma
    printf("Matrisin elemanlarini girin:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            printf("matris[%d][%d]: ", i, j);
            scanf("%d", &matris[i][j]);  
        }
    }

    // Matrisin elemanlarýný yazdýrma
    printf("Matrisin elemanlari:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", matris[i] [j]);  // Elemanlar arasýnda boþluk býrakmak daha okunabilir
        }
        printf("\n");  
    }

    return 0;
}

