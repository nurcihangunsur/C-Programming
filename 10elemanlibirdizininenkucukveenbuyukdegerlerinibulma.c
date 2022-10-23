#include<stdio.h>
#include<stdlib.h>
int main(){
    int sayi[10]={13,43,214,45,56,627,78,839,10,190};
    int enBuyuk, enKucuk,i;
    enBuyuk = sayi[0];
    enKucuk = sayi[0];
    for(i=0;i<10;i++){
        
    if(sayi[i]>enBuyuk){
        enBuyuk = sayi[i];
    }

    }
    printf(" En buyuk sayi = %d\n",enBuyuk);

    for(i=0;i<10;i++){
        if(sayi[i]<enKucuk){
        enKucuk = sayi[i];
    }

    }
    printf("En kucuk sayi %d\n",enKucuk);
     
}