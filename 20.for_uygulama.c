#include<stdio.h>
#include<stdlib.h>
//fibonacci serisi
//Fibonacci budur. 1,1,2,3,5,8,13,21..............
int main(){
	
	int ilksayi = 1;  
	int ikincisayi = 1;
	int i;
	
	printf("%d\n%d\n",ilksayi,ikincisayi);
	
	for(i = 0 ; i < 12 ;i++){
		
		int temp = ikincisayi;
		
		ikincisayi += ilksayi; // bu ayný zamanda þudur ikincsayi = ikinci sayi + ilk sayý bunu unutma!!
		
		ilksayi = temp;
		
		printf("%d\n", ikincisayi);
		}
	/*
	Ýlk iki terim: 1, 1
	1.adým: ilksayi = 1, ikincisayi = 1 + 1 = 2
    2.adým: ilksayi = 1, ikincisayi = 2 + 1 = 3
    3.adým: ilksayi = 2, ikincisayi = 3 + 2 = 5
    ve bu þekilde devam eder
	*/

	return 0;
}
