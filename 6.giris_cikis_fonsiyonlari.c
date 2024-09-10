     #include<stdio.h>
    #define PI 3.14
        // giriþ fonksiyon scanf 
        //çýkýþ fonksiyon print 
    
		/*giriþ-çikis fonksiyonlarý printf ve scanf
		
         float bir deðer olan x'i ekrana bastýrmak için printf("%f",x); yapýyoruz. Benzer bir þekilde, 
         float olan bir x tanýmlayýp
         daha sonra bu deðeri kullanýcýdan almak istersek de scanf("%f",&x); þeklinde yazýyoruz. "&" iþareti x'e kullanýcýdan gelen deðeri atadýðýmýzý gösteriyor. 
         Diðer format belirleyicileri printf ile aynýdýr.
		*/
         int main() {
        float yaricap;
        float hacim;
        
        printf("kurenin yari capini giriniz:");
        
        scanf("%d",& yaricap);
        
        hacim = (4 / 3.0)*PI*(yaricap*yaricap*yaricap);
        printf("Kurenýn hacmi %2.f 'dir",hacim);
        
       	return 0;
        }
