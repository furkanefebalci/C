#include <stdio.h>

int main() {
    int matris[3][5];
    int i, j;
    int toplam[5] = {0};


    printf("Matrisin elemanlarini girin:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &matris[i][j]);
        }
    }

    printf("Matrisin elemanlari:\n");
    for (i = 0; i < 3; i++){
        for (j = 0; j < 5; j++){
            printf("%d ", matris[i][j]);
        }
        printf("\n");
    }

    for (j = 0; j < 5; j++){
        for (i = 0; i < 3; i++){
            toplam[j] += matris[i][j];
        }
    }

    printf("Sutun toplamlari:\n");
    for (j = 0; j < 5; j++){
        printf("%d ", toplam[j]);
    }
    printf("\n");

    return 0;
	}
    





