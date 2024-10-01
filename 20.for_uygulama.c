#include<stdio.h>
#include<stdlib.h>
//fibonacci serisi
/*Fibonacci serisi kendisinde önceki 2 sayının
toplamıdır. 
*/
//Fibonacci budur. 1,1,2,3,5,8,13,21..............
int main(){
	
	int ilksayi = 1;  
	int ikincisayi = 1;
	int i;
	
	printf("%d\n%d\n",ilksayi,ikincisayi);
	
	for(i = 0 ; i < 12 ;i++){
		
		int temp = ikincisayi;
		
		ikincisayi += ilksayi; // bu aynı zamanda şudur ikincsayi = ikinci sayi + ilk sayı bunu unutma!!
		
		ilksayi = temp;
		
		printf("%d\n", ikincisayi);
		}
	/*
	İlk iki terim: 1, 1
	1.adım: ilksayi = 1, ikincisayi = 1 + 1 = 2
    2.adım: ilksayi = 1, ikincisayi = 2 + 1 = 3
    3.adım: ilksayi = 2, ikincisayi = 3 + 2 = 5
    ve bu şekilde devam eder
	*/

	return 0;
}
