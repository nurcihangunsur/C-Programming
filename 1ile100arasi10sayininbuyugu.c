#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
     int a,i,max;

    srand(time(NULL));

    max=0;

    for (i=1;i<10;i++){
        a = rand()%100 + 1;
        printf("%d\n",a);

        if(max<a){
            max = a;
        }
  
}
printf(" En buyuk olan sayi = %d",max);

}