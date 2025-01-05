#include<stdio.h>
// function

void sum(){

    int a = 5, b = 1;
    printf("%d", a + b);
}

int minus(){

    int a = 7, b = 4;
    return a * b;
}

int main(){
    
    //Void sadece direk verilen isimle çagrilir. sum(); gibi.
    sum();
    printf("\n-------------------------\n");
    
    // Donebilen bir deger ise bir integer degerine atanir sonuc = summer(); gibi.
    int sonuc = minus();
    
    
    printf("%d", sonuc);
    printf("\n-------------------------\n");
    printf("%d", minus());

    return 0;
}