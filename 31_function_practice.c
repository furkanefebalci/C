#include<stdio.h>
//faktoriyel tanimlayan fonksiyon

int fak(int a){
	
    if(a == 0 || a == 1){
        return 1;
    } 

    return a * fak(a - 1);
}

int main(){

    int sonuc, sayi = 5;

    sonuc = fak(sayi);
    printf("%d", sonuc);
    return 0;
}
