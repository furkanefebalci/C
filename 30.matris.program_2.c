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

    // Kullan�c�dan matris elemanlar�n� almak i�in d�ng�
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 5; j++) {
            scanf("%d", &matris[i][j]); // & i�areti ile matris eleman�na adresini ge�iyoruz
        }
    }

    // Matris elemanlar�n� yazd�rmak i�in d�ng�
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 5; j++) {
            printf("%d ", matris[i][j]); // Elemanlar aras�nda bo�luk b�rakmak daha okunabilir
        }    
        printf("\n"); // Her sat�rdan sonra yeni sat�ra ge�
    }

    return 0;
}

// detayl� tekrar yap matris i�in



