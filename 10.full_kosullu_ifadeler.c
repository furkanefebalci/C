#include<stdio.h>

int main(){
	
	int vize1,vize2,final;
	float dersort;
	float ortlama;
	
	printf("1. vize notunuzu girin:");
	scanf("%d", &vize1);
	
	printf("2. vize notunuzu girin:");
	scanf("%d", &vize2);
	
	printf("final notunuzu girin:");
	scanf("%d", &final);
	
	printf("Universite ortalamasi kac:");
	scanf("%f" , &ortlama);
	
	dersort= (vize1+ vize2 + final ) /3.0;
	
	// elseden veya if ten sonra tek sat�r yaz�yor isem s�sl� paranteze gerek yok.
	
	if(dersort > 60 ) {
		
		printf("Dersten direk gectiniz.\n");
		
	}
	else if(dersort > 50) {
		
		
		printf("Dersten Bute kaldiniz.\n");
		
		if (ortlama < 2.5) {
		/her if in else si olma mecburiyeti yok.	
			printf("Butu gecsen bile dersi seneye al, �unku ortalaman dusuk.\n");
		
		}
			
	}
	
	else {

		printf ("Dersten kaldiniz.");
		
	}
	

 return 0;
}
