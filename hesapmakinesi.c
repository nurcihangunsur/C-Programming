#include<stdio.h>
#include<stdlib.h>
int main(){

    int a,b,sonuc;
    char secim;
    printf("a sayisini giriniz:");
    scanf("%d",&a);
    printf("b sayisini giriniz:");
    scanf("%d",&b);
    printf("Seciminizi giriniz:");
    secim = getchar();
    scanf("%c",&secim);
   
  
    switch (secim){
        case '+':
        sonuc = a+b;
        printf("Toplama isleminin sonucu = %d",sonuc);
        break;
        case '-':
         sonuc = a-b;
        printf("Cikarma isleminin sonucu = %d",sonuc);
        break;
        case '*':
         sonuc = a*b;
        printf("Carpma isleminin sonucu = %d",sonuc);
        break;
        case '/':
         sonuc = a/b;
        printf("Bolme isleminin sonucu = %d",sonuc);
        break;
        default:
        printf("Lutfen belirtilen karakterlerden birini giriniz!");



    }


}