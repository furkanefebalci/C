#include<stdio.h>
//function ile mini hesap makinesi

int toplama(int a, int b){
    return a + b;
}

int cikarma(int a, int b){
    if( b > a){
        return b - a;
    }
    return a - b;
}

int carpma(int a, int b){
    return a * b;
}

float bolme(float a, float b){

    if( b == 0){

        printf("Girilen sayilarda hata var: ");
        return 0;
    }
    return a / b;
}


int main(){
    int secim;
    float sayi1, sayi2, sonuc;
    
    while (1)
    {
        
    printf("\nYapmak istediginiz islemi seciniz: ");
    printf("\n1.Toplama\n2.Cikarma\n3.Carpma\n4.Bolme\nCikmak icin 0'a basin.");
    scanf("%d", &secim);

    switch(secim){

        case 1:
            printf("1. sayiyi girin: ");
            scanf("%f", &sayi1);
    
            printf("2. sayiyi girin: "); 
            scanf("%f", &sayi2);
            
            sonuc = toplama((int)sayi1 ,(int)sayi2); 
            printf("%.1f", sonuc);
            break;
        
        case 2:
            printf("1. sayiyi girin: ");
            scanf("%f", &sayi1);
    
            printf("2. sayiyi girin: ");
            scanf("%f", &sayi2);
            
            sonuc = cikarma((int)sayi1 ,(int)sayi2);
            printf("%f", sonuc);
            break;
        
        case 3: 
            printf("1. sayiyi girin: ");
            scanf("%f", &sayi1);
    
            printf("2. sayiyi girin: ");
            scanf("%f", &sayi2);
            
            sonuc = carpma((int)sayi1 ,(int)sayi2);
            printf("%f", sonuc);
            break;
        
        case 4:
            printf("1. sayiyi girin: ");
            scanf("%f", &sayi1);
    
            printf("2. sayiyi girin: ");
            scanf("%f", &sayi2);
            
            sonuc = bolme((float)sayi1 ,(float)sayi2);
            printf("%.2f", sonuc);
            break;
        
        default:
            printf("Hatali giris");
        
        case 0:
            printf("Program sonlanmistir.");
            return 0;
    }
    }
    return 0;
}
