#include <stdio.h>
//Bu proje say�lar� 3x3 bir kare �eklide diziyor

int main() {
    int matris[3][3];
    int i, j;
     //(i): Sat�r 
	 //(j): S�tun 
    // Kullan�c�dan matrisin elemanlar�n� okuma
    printf("Matrisin elemanlarini girin:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("matris[%d][%d]: ", i, j);
            scanf("%d", &matris[i][j]);
            /*
            D�� D�ng� (i): Sat�r indeksini kontrol eder ve 0'dan 2'ye kadar d�ner.
            �� D�ng� (j): S�tun indeksini kontrol eder ve 0'dan 2'ye kadar d�ner. 
            */
        }
    }

    // Matrisin elemanlar�n� yazd�rma
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
Program ��yle �al���yor sana diyorki 
matris[0][0]: k�sm�na ne koyay�m diyor sen 1 diyorsun mesela
matris[0][1]: buraya ne koyay�m 2 diyorsun b�yle devam ediyor 
matris[0][2]: 3
matris[1][0]: 4
matris[1][1]: 5
matris[1][2]: 6
matris[2][0]: 7
matris[2][1]: 8
matris[2][2]: 9

sonu�: 1 2 3 
       4 5 6 
       7 8 9 
       
bu program indexe g�re say� yerle�tirmeye yar�yor.
*/
