#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void yaz( char a, int sayi);
int main(){
    char a ;
    int sayi;
    printf("Bir sayi giriniz:"); scanf("%d",&sayi); a = getchar();
    printf("Bir karakter giriniz:"); scanf("%c",&a);
    yaz(a,sayi);
    return 0;
}
void yaz (char a , int sayi){
    int i;
    for(i=0;i<sayi;i++){
        printf("%c",a);
    }

}