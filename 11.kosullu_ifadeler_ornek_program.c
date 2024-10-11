#include<stdio.h>

int main () {
	

   int vize1 ,vize2 ,final;
   
   float okulortlama;
   float dersort;
   
   printf("1. vize notunuzu girin: ");
   scanf("%d", & vize1);
   
   printf("2. vize notunuzu girin:");
   scanf("%d", & vize2);
   
   printf("Final notunuzu girin:");
   scanf("%d" ,& final);
   
   printf("Universite ortalamanizi girin:");
   scanf("%f",&okulortlama);


   dersort = (vize1*3/10.0 + vize2*3/10.0 + final*4/10.0 );
   
   if (dersort >= 90) {
   	   printf("Harf Notunuz - AA ve Ders Ortalaminiz : %.2f\n", dersort);
   	   
   }
   
   else if (dersort >= 85 && dersort < 90) {
   	
   	
   	  printf("Harf Notunuz - AB ve Ders Ortalaminiz : %.2f\n",dersort);
   	  
   }
   	
   	else if (dersort >= 80 && dersort < 85 ) {
   		
   		
   	  printf ("Harf Notunuz - BB ve ders ortalamaniz : %.2f\n", dersort);
   	
   }
    
    else if (dersort >= 75 && dersort < 80 ) {
   		
   		
   	  printf ("Harf Notunuz - CB ve ders ortalamaniz :%.2f\n", dersort);
   	
   }
    
    else if (dersort >= 70 && dersort < 75 ) {
    	printf ("Harf Notunuz - CC ve ders ortalamaniz : %.2f\n", dersort);
    	if (okulortlama < 2.5) {
		
		printf("Dersi tekrar alman yararli olur ortalaman dusuk. ");
		}
   }
    else if (dersort >= 65 && dersort < 70 ) {
    	printf ("Harf Notunuz - DC ve ders ortalamaniz : %.2f\n", dersort);
    	if (okulortlama < 2.5) {
		
		printf("Dersi fazla çalýþmalýsýnýz, ortalamanýz çok düþük.");
		}
   }
    else if (dersort >= 60 && dersort < 65 ) {
    	printf ("Harf Notunuz - DD ve ders ortalamaniz : %.2f\n", dersort);
    	if (okulortlama < 2.5) {
		
		printf("Kotu ortalama.");
		}
   }
    
    else {	
    	printf("Harf Notunuz - FF VE Ders Ortalamaniz : %.2f\n", dersort);
    	printf("Dersten kaldiniz.");
	}
   	   

return 0;
}

