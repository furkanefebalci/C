#include<stdio.h>
#define PI 3.14
        
int main() {
    float yaricap;
    float hacim;
        
    printf("Kurenin yari capini giriniz:");
    scanf("%d",&yaricap);
        
    hacim = (4 / 3.0) * PI * (yaricap * yaricap * yaricap);
    printf("Kurenýn hacmi %2.f 'dir", hacim);
        
	return 0;
}
