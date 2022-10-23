#include<stdio.h>
#include<stdlib.h>
int main(){
    int array[10]={12,213,334,425,563,67,78,839,11,10};
    int i,j,tut;
    for(j=0;j<10;j++){
        for (i=0;i<9;i++){
            if(array[i]>array[i+1]){
                tut = array[i];
                array[i] = array [i+1];
                array[i+1] = tut;
            }

        }
    }
    printf("\n Sayilarin buyukten kucuge dogru siralanmasi\n");
    for(i=0;i<10;i++){
        printf("%d\n",array[i]);
    }

}