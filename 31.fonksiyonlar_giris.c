#include<stdio.h>
void hatayibas(int hata){
	
	printf("Hata kodu %d",hata);
}


int main () { 
    
    int sayi;
    printf("Lutfen negatif olmayan sayi giriniz:");
    
    scanf ("%d",&sayi);
    
    if (sayi < 0 ){
    	
    	hatayibas(404);
    		
	}
	else{
		
		printf("Tebrikler");
		
	}



return 0;
}

/*fonsiyonlar nedir sor 
bide bu iþlemi sadece if ,else ilede yapabilirim neden fonksiyonlardan yardým aldýk sor.
void nedir onuda sor 

*/
