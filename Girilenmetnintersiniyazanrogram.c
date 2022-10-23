#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int i,uzunluk;
    char metin[100];
    printf("Metni giriniz:");
    gets(metin);
   for(i=0;i<100;i++){
     if(metin[i] == '\0')
     break;
   }
   uzunluk=i;
     for(i=uzunluk-1;i>=0;i--)
   
        printf("%c",metin[i]);
}