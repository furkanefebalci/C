     #include<stdio.h>
    #define PI 3.14
        // giri� fonksiyon scanf 
        //��k�� fonksiyon print 
    
		/*giri�-�ikis fonksiyonlar� printf ve scanf
		
         float bir de�er olan x'i ekrana bast�rmak i�in printf("%f",x); yap�yoruz. Benzer bir �ekilde, 
         float olan bir x tan�mlay�p
         daha sonra bu de�eri kullan�c�dan almak istersek de scanf("%f",&x); �eklinde yaz�yoruz. "&" i�areti x'e kullan�c�dan gelen de�eri atad���m�z� g�steriyor. 
         Di�er format belirleyicileri printf ile ayn�d�r.
		*/
         int main() {
        float yaricap;
        float hacim;
        
        printf("kurenin yari capini giriniz:");
        
        scanf("%d",& yaricap);
        
        hacim = (4 / 3.0)*PI*(yaricap*yaricap*yaricap);
        printf("Kuren�n hacmi %2.f 'dir",hacim);
        
       	return 0;
        }
