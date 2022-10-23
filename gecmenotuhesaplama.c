#include<stdio.h>
int main(){
    int vize,final;
    float ortalama;
    printf("vize notunuzu giiniz:");
    scanf("%d",&vize);
    printf("Final notunuzu giriniz");
    scanf("%d",&final);
   ortalama = (vize*0.4) + (final*0.6); 
   printf(" Dersin ortalamasi = %f",ortalama);



    }