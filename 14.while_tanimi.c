#include<stdio.h>

//while(Döngü)

int main () {
	
	int i;
	
	i = 0;
	
	while(i < 10) {	 //i 10 sayýsýna gelene kadar döngü devam eder
	
		printf("%d - Hello World\n",i);
		
		
		i++; 
		//i++ deðerini 1 artýrmak
		//i 1 artýyo bakýyo 10dan büyük deil 2 yapýyo sonra tekrar artýrýyor 10 olana kadar ekrana yazdýrýyor
		//i++; bunu silersen sürekli basar
		
	
		
	}
	printf("%d - Dongu Bitti",i);
	// while parantezinden çýkýp bunu yazarsam döngü sonuna yazar yazmas isem boþ kalýr 
	
	

	
	return 0;
}
