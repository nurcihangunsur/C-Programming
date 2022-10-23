#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define pi 3.14
int main(){
    int aci;
    printf("Aci degerini giriniz:");
    scanf("%d",&aci);
    printf(" Aci = %d Acinin sinus degeri = %.3f",aci,sin(aci*pi/180));

}