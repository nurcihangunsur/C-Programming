#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int i =0 ;
    int sayac = 1;
    char metin[100];
    printf("Bir metin giriniz:");
    gets(metin);
    while(metin[i]!='\0')
    i++;
    printf("\nMetnin uzunlugu : %d",i);

    while (i>=0){
        if(metin[i]==' ')
         sayac++;
         i--;
         
        
    }
    printf("\n %d kadar kelime yazilmistir", sayac);

}