#include <stdio.h>
#define PI 3.14
// Klavyeden girilen yarıçapa göre kürenin yüzey alanını ve hacmini hesaplar

int main() 

{

 float yaricap;

 printf("kurenin yaricapini girin: ");
 scanf("%f",&yaricap);
 
 printf("kurenin yuzey alani: %.2f\n",4*PI*yaricap*yaricap);
 printf("kurenin hacmi: %.2f",(4/3.0)*PI*yaricap*yaricap*yaricap);
 // Dikkat! 4/3 = 1         4/3.0 = 1.33      

 return 0;

}