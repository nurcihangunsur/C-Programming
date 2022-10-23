#include<stdio.h>
#include<stdlib.h>
int main(){
    int i;
    int toplam = 0;
    for (i=1;i<=100;i++){
        printf("%d\n",i);
        toplam+=i;    
    }
    printf("toplam = %d",toplam);
}
