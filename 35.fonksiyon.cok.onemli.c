#include <stdio.h>

/*
returntype functionname(parameters) {
    //function body

    //return type (void de�ilse)

*/
//Void(de�er d�nd�rmeyen) fobnksiyonlar.
void sum() {
    int a = 10;
    int b = 5;
    int sonuc = a + b;

    printf("sonuc: %d\n", sonuc);
}

void dif() {
    int a = 10;
    int b = 5;
    int sonuc = a - b;

    printf("sonuc: %d\n", sonuc);
}
void carp() {
    int a = 10;
    int b = 5;
    int sonuc = a * b;

    printf("carp: %d\n", sonuc);
}
void bol() {
    int a = 10;
    int b = 5;
    int sonuc = a / b;

    printf("sonuc: %d\n", sonuc);
}

int topla_1() {
    int a = 10;
    int b = 5;
    int sonuc = a + b; //15

    return sonuc;//15 de�erini d�n�r�cek
}

float topla_1_float() {
    float a = 10.2;
    float b = 5.4;
    float sonuc = a + b; //15.6

    return sonuc; //15 de�erini d�n�r�cek
}
/*
s�s�l� parantez i�inkedi de�i�kenler buradaki �rnekte mesela int a b total vs. ler sadece
oraya aittir.
*/

int main() {
    printf("1--------------------------\n");
    sum();
    dif();
    carp();
    bol();

    printf("2--------------------------\n");

    int sonuc = topla_1();
    printf("sonuc: %d", sonuc);

    return 0;
}
