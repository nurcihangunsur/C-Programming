#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int i;
    char metin[100];
    char harf;
    int sayac = 0;
    printf("Bir metin giriniz:"); gets(metin);
    printf("Bir harf giriniz:"); scanf("%c",&harf);

    for(i=0;metin[i]!='\0';i++){
        if(metin[i]==harf)
         sayac++;
    }
    printf("Girilen metin icersinde %c harfi %d kadar gecmistir.", harf,sayac);

}