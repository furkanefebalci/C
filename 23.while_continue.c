#include<stdio.h>
//continue devam etmek demek

int main () {
	
	int toplam = 0;
	
	int i;
	
	while(i <= 10 ) {
		
		if(i % 2 == 1){ // == bu i�aret kar��lar�t�rma i�aretidir unutma!!
		    i++;
		    continue;
     	}
     	
     	toplam += i;// toplam = toplam +i
     	i++;

	}
	// continue �zerine i++; yapmaz isem d�ng� 1 defa �al���r 1 olur ve bir daha d�nmez
	//if(i % 2 == 1) k�saca a��klamak gerekir ise bu i say�s� 2 ye b�l�nd���nde �ift ��karsa true tek ��karsa false olmas� anlam�na geliyor.
	// bu kod k�saca 10 say�s�na kadar olan �ift say�lar� toplad� (10 say�s�da dahil).
	printf("%d", toplam);

    return 0;
}
