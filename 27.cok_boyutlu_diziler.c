#include<stdio.h>

int main(){ 
	/*0 1 2 (Sütun İndeksleri)
      1 2 3 (0. Satır)
      4 5 6 (1. Satır)
      7 8 9 (2. Satır)
	*/
	
	int matris [3][3] ={{1,2,3},{4,5,6},{7,8,9}};
	 int i,j; //2. satır 2. sütun demek 
     //(i): Satır 
	 //(j): Sütun 

	 for( i = 0; i < 3; i++){
	 	
	 	for(j = 0; j < 3; j++){
	 		printf("%d ",matris[i][j]);
	 /* 
	 Dış Döngü (i): Satır indeksini kontrol eder ve 0'dan 2'ye kadar döner.
     İç Döngü (j): Sütun indeksini kontrol eder ve 0'dan 2'ye kadar döner.
	 */
		 }
		 printf("\n");	
	 }
	return 0;
}

