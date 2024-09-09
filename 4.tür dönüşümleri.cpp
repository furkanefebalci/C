#include<stdio.h>


//YARDIM ÝSTE 

int main() {
	
	//integer
	int a;
	
	// float
	
	float b;
	
	a = 10;
	b = 4.002;
	
	printf("a: %d\n", a);
	printf("b: %f\n", b);
	
	
	// Convert(dönüþtürmek)
	int b_int;
	float a_float;
	
	
	b_int = (int)b;
	a_float = (float)a;
	
	printf("a_float: %f\n", a_float);
	printf("b_int: %d\n", b_int);
	
	
	return 0;
}
