#include<stdio.h>
int main (){

	int i;
	int j;
	
	for(i=0 , j=1; i < 10 && j < 5 ; i++, j++) {
		
		// i veya j 2 sinden biri son buldu�u an �tekide son bulur
		// e�er && yerine || koyarsam k���k olan b�y�k olan� takip eder
				
		printf("i: %d j:%d\n",i,j);

	}
	
	return 0;
	
}

