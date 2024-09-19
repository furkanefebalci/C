#include<stdio.h>
int faktoriyel(int sayi){
	
	int fact = 1;
	
	for (;sayi>0 ; sayi--){
		
	/* Normalde 
	(i = 5; sayi >0 falan yapardýk ama 
	aþaðýda kullanýcýdan sayýyý alýcaðým için sabit 
	bir deðer olmadýðý için, burayý boþ býraktým.
	*/	
		fact *= sayi;
	
	}
	return fact;
	// dýþ dünyaya aktarma diyor sor.
	

}
int main () {

    int n;
    
    printf("Faktoriyel istediginiz sayiyi giriniz:");
    
    scanf("%d",&n);
    
    printf ("faktoriyel :%d",faktoriyel(n));
    //faktoriyel(n) sayýyý aldýðým yer 
    
	
}
