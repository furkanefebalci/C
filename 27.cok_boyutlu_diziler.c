#include<stdio.h>

int main(){ 
	/*0 1 2 (S�tun �ndeksleri)
      1 2 3 (0. Sat�r)
      4 5 6 (1. Sat�r)
      7 8 9 (2. Sat�r)
	*/
	
	int matris [3][3] ={{1,2,3},{4,5,6},{7,8,9}};
	 int i,j; //2. sat�r 2. s�tun demek 
     //(i): Sat�r 
	 //(j): S�tun 

	 for( i = 0; i < 3; i++){
	 	
	 	for(j = 0; j < 3; j++){
	 		printf("%d ",matris[i][j]);
	 /* 
	 D�� D�ng� (i): Sat�r indeksini kontrol eder ve 0'dan 2'ye kadar d�ner.
     �� D�ng� (j): S�tun indeksini kontrol eder ve 0'dan 2'ye kadar d�ner.
	 */
		 }
		 printf("\n");	
	 }
	return 0;
}

