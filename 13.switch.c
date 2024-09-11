#include<stdio.h>

// Atm Simülasyonu
 

int main () {
	 int islem; //5 iþlem
	 int bakiye = 1000;
	 int tutar;
	 // Kullanýcýya iþlem seçenekleri
	 printf("islemler\n1:Para cekme\n2:Para yatirma\n3:Havale yapma\n4:Bakiye sorgulama\n5:Kart iade\n\n\n\n");
	 
	 //kullanýcýnýn seçmesi gerek iþlem
	 printf("islemi seciniz:");
	 scanf("%d", &islem);
	 
	 //seçilen iþleme göre iþlem gerçekleþtirme
	 switch(islem){
	 	case 1: //para çekme
	 		printf("Bakiyeniz: %d\n", bakiye);
	 		printf("Cekilecek Tutar:");
	 		scanf("%d", & tutar);
	 		if(tutar > bakiye) {
	 			printf("Bakiye Yetersiz\n");	
			 }
			 bakiye -= tutar;
			 
			 printf("Bakiyeniz:%d" , bakiye);
			 break;
	 		
	
	 	
	 	case 2: //para yatýrma
	 			printf("Bakiyeniz: %d\n", bakiye);
	 		printf("Yatiralacak Tutar:");
	 		scanf("%d", & tutar);
	 	
			 bakiye += tutar;
			 
			 printf("Bakiyeniz:%d" , bakiye);
			 break;
	 		
	 	
	 	
	 	case 3: // Havale
	 			printf("Bakiyeniz: %d\n", bakiye);
	 		printf("Havala yapilacak Tutar:");
	 		scanf("%d", & tutar);
	 		if(tutar > bakiye) {
	 			printf("Bakiye Yetersiz\n");	
			 }
			 bakiye -= tutar;
			 
			 printf("Bakiyeniz:%d" ,bakiye);
			 break;
	 	
	 	
	 	case 4: //Bakiye sorgulama
	 		printf("Bakiyeniz:%d" ,bakiye);
	 		break;
	 	
	 	
	 	case 5: // Kart iade
	 		printf("Kart iade edildi.\n");
	 		break;
	 	
	 	
	 	
	 	default: //hiç bir caseye gidemesse gideceði yer 
	 	
	     	printf("Hatali tuslama");
	    	break;
      
       /*caseyi kapatmadýðýmda örnek veriyorum case 2 yi break ile kapatmaz isem 
	   altýndaki case 3 e de girer. case 5 için olursa, default a da girer. 
       */
      
       /*Switch nedir?
       Kullanýcýnýn seçtiði iþleme göre 
       hangi kod bloðunun çalýþacaðýný belirler.
       */
       
        /*Break nedir?
        durmak anlamýna gelir çalýþan caseyi durdurur
        */
	 }
		
	return 0;
}
	

	

	

