#include <stdio.h>

// ATM Simulasyonu

int main() {
    int islem;        
    int bakiye = 1000; 
    int tutar;        

    printf("---- ATM Ýþlemleri ----\n");
    printf("1: Para Çekme\n");
    printf("2: Para Yatýrma\n");
    printf("3: Havale Yapma\n");
    printf("4: Bakiye Sorgulama\n");
    printf("5: Kart Ýade\n");
    printf("-------------------------\n");

    printf("Lütfen yapmak istediðiniz iþlemi seçiniz: ");
    scanf("%d", &islem);

    switch (islem) {

        case 1: // Para Çekme
            printf("Bakiyeniz: %d TL\n", bakiye);
            printf("Çekilecek Tutar: ");
            scanf("%d", &tutar);

            if (tutar > bakiye) {
                printf("Bakiye Yetersiz! Çekmek istediðiniz tutar mevcut bakiyeden fazla.\n");
            } else {
                bakiye -= tutar;
                printf("Para baþarýyla çekildi. Güncel bakiyeniz: %d TL\n", bakiye);
            }
            break;


        case 2: // Para Yatýrma
            printf("Bakiyeniz: %d TL\n", bakiye);
            printf("Yatýrýlacak Tutar: ");
            scanf("%d", &tutar);

            bakiye += tutar;
            printf("Para baþarýyla yatýrýldý. Güncel bakiyeniz: %d TL\n", bakiye);
            break;


        case 3: // Havale Yapma
            printf("Bakiyeniz: %d TL\n", bakiye);
            printf("Havale Yapýlacak Tutar: ");
            scanf("%d", &tutar);

            if (tutar > bakiye){
                printf("Bakiye Yetersiz! Havale yapmak istediðiniz tutar mevcut bakiyeden fazla.\n");
            } 
			else{
                bakiye -= tutar;
                printf("Havale baþarýyla yapýldý. Güncel bakiyeniz: %d TL\n", bakiye);
            }
            break;


        case 4: // Bakiye Sorgulama
            printf("Güncel bakiyeniz: %d TL\n", bakiye);
            break;


        case 5: // Kart iade
            printf("Kartýnýz iade edildi. Ýyi günler dileriz!\n");
            break;


        default: // Gecersiz islem
            printf("Hatalý seçim yaptýnýz. Lütfen geçerli bir iþlem seçiniz.\n");
            break;
    }

    return 0;
}

