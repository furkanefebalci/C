#include<stdio.h>
//Bool veri tipi (ture ya da false)
/*
Mant�ksal ifadeler do�ru ise true 
Yanl�� isse false 
ayn� zamanda 0 olmayan say�lar (1 ,20 ,432) ture say�l�r
0 ise false dir yani yanl��t�r.
 
<------> k���k m�d�r a < b 
>------> b�y�k m�d�r a > b 
<= ----> k���k yada e�it midir. a <= b
>=-----> b�y�k yada e�it midir. a >= b
== ----> e�it midir. a == b �eklinde.
!=-----> e�it de�il midir. a != b

Mant�ksal ba�la�lar
Bir �ok ifadeyi i�lemi ba�layan ara�lard�r.

Matematikteki ve konusu ve gibi d���nebilirsin.

&& ------> mant�ksal and("ve") ba�lac�. true && false gibi ba�lanabilir. && oldu�u c�mlenin true olmas� i�in b�t�n ifadelerin true olmas� gerekir.
E�er bu c�mlenin i�inde bir tane bile false varsa o c�mle false olur.
 
|| ------> mant�ksal or("ya da") ba�lac�. true || true || false gibi ba�lanabilir. || oldu�u c�mlenin true olmas� i�in en az bir ifadenin true olmas� gerekir. 
E�er mant�ksal or (||) ile ba�lanm�� c�mlenin i�inde b�t�n ifadeler false ise c�mle false olur.

! -------> mant�ksal not ("de�ili") operat�r�. do�ru olanfadeyi yanl��(false) yapar.
yanl�� olan ifadeyi do�ru yani (true) yapar.

? ise demek

�artl� c�mleler 

a= x > y ? x: y;

Bu �rnek, x ve y de�i�kenlerinin de�erlerini kar��la�t�rarak a de�i�kenine x veya y'yi atar. ��te ad�m ad�m nas�l �al��t���:

Ko�ul: x > y

Bu, x de�i�keninin y de�i�keninden b�y�k olup olmad���n� kontrol eder.
Ko�ul Do�ruysa: x

E�er x ger�ekten y'den b�y�kse, a de�i�kenine x atan�r.
Ko�ul Yanl��sa: y

E�er x y'den k���k veya e�itse, a de�i�kenine y atan�r.
*/ 

/*
�rnekler:

int a = 10;
int b =14;

a > b; false
a < b; true
a >=b; false
a <= b; true
a != b; true
a == b; false
*/

/*
�rnek;

int a = 40;
int b = 50;
int c = 60;
int d = 70;

a > c && c <=d && (a > b || b < d)

��z�m:             (true)
a > c false
c <=d true 
parantez true    

false && true && true 
ve ba�lac�nda hepsinin true olmas� laz�m ama burada �yle deil
ondan kaynakl� cevap;false

�rnek;

!( a >= d)

��z�m;

parantez i�i true fakat d���nda deili var o y�zden true false oldu.
*/

int main(){
	
	int a,b=20 ,c =30;
	
	a = b < c ? b: c;
	printf("%d",a);
	
	
	// bu ifadeki ��zerken ilk ba�ta a = tir ifadesini g�rme
	// b < c do�ru true o y�zden b aya atand�r 20 
	// �artl� c�mleler nadir kullan�l�r
	
	return 0;
}
