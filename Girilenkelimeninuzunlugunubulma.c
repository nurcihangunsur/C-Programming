#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int i = 0;
    char kelime[20];
    printf("Bir kelime giriniz:");
    gets(kelime);
    printf("Girilen kelimenin uzunlugu = %d",strlen(kelime));

}