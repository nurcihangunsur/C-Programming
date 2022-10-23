#include<stdio.h>
#include<math.h>
int main(){

    int sayi,i;
    int sonuc = 1;
    printf("Faktoriyelini almak istediğiniz sayiyi giriniz:");
    scanf("%d",&sayi);
    for (i=1;i<=sayi;i++){
        sonuc*=i;
    }
    printf("Faktoriyelin sonucu = %d",sonuc);
}