//int: Tam say�lar i�in kullan�l�r. �rne�in, 42, -7. #d ile yaz�l�r
//short: Daha k���k bir tam say� aral��� sa�lar. Genellikle int'ten daha az yer kaplar.
//long: Daha b�y�k bir tam say� aral��� sa�lar. Genellikle int'ten daha fazla yer kaplar.
//float: Tek hassasiyetli kayan nokta say�lar� i�in kullan�l�r. �rne�in, 3.14. #f ile yaz�l�r 
//double: �ift hassasiyetli kayan nokta say�lar� i�in kullan�l�r. �rne�in, 3.14159265.
//char: Tek bir karakteri temsil eder. �rne�in, 'a', '1'.
//De�i�ken tan�mlama veritipi de�i�kenad�;
//%s: printf ve benzeri fonksiyonlarda string(%s) yazd�rmak i�in kullan�l�r. string metin demek


/*
Uzun yaz�lar i�in bu yaz� aral��n� kullan 
*/



#include <stdio.h>

int main()  {


int a1 = 42;
char b1 = 66;
char b2 = 'B';	
float c1 = 4.2;
double d1 = 0.21;

printf("%d %c %5d %.1f %.2f %s\n",a1,b1,b2,c1,d1,"Furkan Efe Balci");





printf("%d byte \n",sizeof(char));                                
printf("%d byte \n",sizeof(int));
printf("%d byte \n",sizeof(short int));
printf("%d byte \n",sizeof(long int));
printf("%d byte \n",sizeof(float));
printf("%d byte \n",sizeof(double));

/*
1 byte
4 byte
2 byte
4 byte
4 byte
8 byte

//Abime sor bu nedir
*/











    return 0;

}


