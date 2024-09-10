#include<stdio.h>
//Bool veri tipi (ture ya da false)
/*
Mantıksal ifadeler doğru ise true 
Yanlış isse false 
aynı zamanda 0 olmayan sayılar (1 ,20 ,432) ture sayılır
0 ise false dir yani yanlıştır.
 
<------> küçük müdür a < b 
>------> büyük müdür a > b 
<= ----> küçük yada eşit midir. a <= b
>=-----> büyük yada eşit midir. a >= b
== ----> eşit midir. a == b şeklinde.
!=-----> eşit değil midir. a != b

Mantıksal bağlaçlar
Bir çok ifadeyi işlemi bağlayan araçlardır.

Matematikteki ve konusu ve gibi düşünebilirsin.

&& ------> mantıksal and("ve") bağlacı. true && false gibi bağlanabilir. && olduğu cümlenin true olması için bütün ifadelerin true olması gerekir.
Eğer bu cümlenin içinde bir tane bile false varsa o cümle false olur.
 
|| ------> mantıksal or("ya da") bağlacı. true || true || false gibi bağlanabilir. || olduğu cümlenin true olması için en az bir ifadenin true olması gerekir. 
Eğer mantıksal or (||) ile bağlanmış cümlenin içinde bütün ifadeler false ise cümle false olur.

! -------> mantıksal not ("değili") operatörü. doğru olanfadeyi yanlış(false) yapar.
yanlış olan ifadeyi doğru yani (true) yapar.

? ise demek

Şartlı cümleler 

a= x > y ? x: y;

Bu örnek, x ve y değişkenlerinin değerlerini karşılaştırarak a değişkenine x veya y'yi atar. İşte adım adım nasıl çalıştığı:

Koşul: x > y

Bu, x değişkeninin y değişkeninden büyük olup olmadığını kontrol eder.
Koşul Doğruysa: x

Eğer x gerçekten y'den büyükse, a değişkenine x atanır.
Koşul Yanlışsa: y

Eğer x y'den küçük veya eşitse, a değişkenine y atanır.
*/ 

/*
Örnekler:

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
Örnek;

int a = 40;
int b = 50;
int c = 60;
int d = 70;

a > c && c <=d && (a > b || b < d)

Çözüm:             (true)
a > c false
c <=d true 
parantez true    

false && true && true 
ve bağlacında hepsinin true olması lazım ama burada öyle deil
ondan kaynaklı cevap;false

Örnek;

!( a >= d)

Çözüm;

parantez içi true fakat dışında deili var o yüzden true false oldu.
*/

int main(){
	
	int a,b=20 ,c =30;
	
	a = b < c ? b: c;
	printf("%d",a);
	
	
	// bu ifadeki çözerken ilk başta a = tir ifadesini görme
	// b < c doğru true o yüzden b aya atandır 20 
	// şartlı cümleler nadir kullanılır
	
	return 0;
}
