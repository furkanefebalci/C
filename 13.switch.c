#include<stdio.h>

// Atm Sim�lasyonu
 

int main () {
	 int islem; //5 i�lem
	 int bakiye = 1000;
	 int tutar;
	 // Kullan�c�ya i�lem se�enekleri
	 printf("islemler\n1:Para cekme\n2:Para yatirma\n3:Havale yapma\n4:Bakiye sorgulama\n5:Kart iade\n\n\n\n");
	 
	 //kullan�c�n�n se�mesi gerek i�lem
	 printf("islemi seciniz:");
	 scanf("%d", &islem);
	 
	 //se�ilen i�leme g�re i�lem ger�ekle�tirme
	 switch(islem){
	 	case 1: //para �ekme
	 		printf("Bakiyeniz: %d\n", bakiye);
	 		printf("Cekilecek Tutar:");
	 		scanf("%d", & tutar);
	 		if(tutar > bakiye) {
	 			printf("Bakiye Yetersiz\n");	
			 }
			 bakiye -= tutar;
			 
			 printf("Bakiyeniz:%d" , bakiye);
			 break;
	 		
	
	 	
	 	case 2: //para yat�rma
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
	 	
	 	
	 	
	 	default: //hi� bir caseye gidemesse gidece�i yer 
	 	
	     	printf("Hatali tuslama");
	    	break;
      
       /*caseyi kapatmad���mda �rnek veriyorum case 2 yi break ile kapatmaz isem 
	   alt�ndaki case 3 e de girer. case 5 i�in olursa, default a da girer. 
       */
      
       /*Switch nedir?
       Kullan�c�n�n se�ti�i i�leme g�re 
       hangi kod blo�unun �al��aca��n� belirler.
       */
       
        /*Break nedir?
        durmak anlam�na gelir �al��an caseyi durdurur
        */
	 }
		
	return 0;
}
	

	

	

