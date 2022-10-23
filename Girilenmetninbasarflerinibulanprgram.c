#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int i = 0;
    char metin[100];
    printf("Metni giriniz:");
    gets(metin);
    printf("%c\n",metin[0]);
    for(i=0;i<=strlen(metin);i++){
        if(metin[i] ==' ')
         printf("%c\n",metin[i+1]);
    }
}