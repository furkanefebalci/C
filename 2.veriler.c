//int: Tam sayýlar için kullanýlýr. Örneðin, 42, -7. #d ile yazýlýr
//short: Daha küçük bir tam sayý aralýðý saðlar. Genellikle int'ten daha az yer kaplar.
//long: Daha büyük bir tam sayý aralýðý saðlar. Genellikle int'ten daha fazla yer kaplar.
//float: Tek hassasiyetli kayan nokta sayýlarý için kullanýlýr. Örneðin, 3.14. #f ile yazýlýr 
//double: Çift hassasiyetli kayan nokta sayýlarý için kullanýlýr. Örneðin, 3.14159265.
//char: Tek bir karakteri temsil eder. Örneðin, 'a', '1'.
//Deðiþken tanýmlama veritipi deðiþkenadý;
//%s: printf ve benzeri fonksiyonlarda string(%s) yazdýrmak için kullanýlýr. string metin demek


/*
Uzun yazýlar için bu yazý aralðýný kullan 
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


