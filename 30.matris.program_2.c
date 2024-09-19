 #include <stdio.h>
/*
 3 5 1 3 2
 4 4 4 5 5 
 9 8 9 7 7
 */
 
 // sütun toplama programý 
 
int main() {
    int matris[3][5];
    int i, j;
    int toplam[5] = {0}; // Her sütun için toplamlarý tutacak dizi

    // Kullanýcýdan matris elemanlarýný almak için döngü
    printf("Matrisin elemanlarini girin:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &matris[i][j]);
        }
    }

    // Matrisin elemanlarýný yazdýrmak için döngü
    printf("Matrisin elemanlari:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", matris[i][j]);
        }
        printf("\n");
    }

    // Her sütunun toplamýný hesaplama
    for (j = 0; j < 5; j++) {
        for (i = 0; i < 3; i++) {
            toplam[j] += matris[i][j];
        }
    }

    // Sütun toplamlarýný yazdýrma
    printf("Sutun toplamlari:\n");
    for (j = 0; j < 5; j++) {
        printf("%d ", toplam[j]);
    }
    printf("\n");

    return 0;
	}
    





