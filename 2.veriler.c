//int: Tam sayılar için kullanılır. Örneğin, 42, -7. %d ile yazılır
//short: Daha küçük bir tam sayı aralığı sağlar. Genellikle int'ten daha az yer kaplar.
//long: Daha büyük bir tam sayı aralığı sağlar. Genellikle int'ten daha fazla yer kaplar.
//float: Tek hassasiyetli kayan nokta sayıları için kullanılır. Örneğin, 3.14. #f ile yazılır 
//double: Çift hassasiyetli kayan nokta sayıları için kullanılır. Örneğin, 3.14159265.
//char: Tek bir karakteri temsil eder. Örneğin, 'a', '1'.
//Değişken tanımlama veritipi değişkenadı;
//%s: printf ve benzeri fonksiyonlarda string(%s) yazdırmak için kullanılır. string metin demek

/*
Uzun yazılar için bu yazı aralğını kullan 
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
*/
    return 0;
}


