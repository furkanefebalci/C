#include <stdio.h>

int main() {
    int matris[3][3];
    int i, j;

    // Kullanıcıdan matrisin elemanlarını okuma
    printf("Matrisin elemanlarini girin:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("matris[%d][%d]: ", i, j);
            scanf("%d", &matris[i][j]);
        }
    }

    // Matrisin elemanlarını yazdırma
    printf("Matrisin elemanlari:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matris[i][j]);
        }
        printf("\n");
    }

    return 0;
}
