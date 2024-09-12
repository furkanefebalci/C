#include<stdio.h>

int main(){
	/*(0.1.2.)
	  1 2 3 0.satı
	  4 5 6 1.satır 
	  7 8 9 2.satır
	*/
	
	int matris [3][3] ={{1,2,3},{4,5,6},{7,8,9}};
	 int i,j; //2. satır 2. sütun demek
	 
	 for( i = 0; i < 3; i++){
	 	
	 	for(j = 0; j < 3; j++){
	 		printf("%d ",matris[i][j]);
		 }
		 printf("\n");	
	 }
	return 0;
}
