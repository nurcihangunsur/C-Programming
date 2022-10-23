#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int max(int*, int);

main(void){
    int i,*x;
    printf("Girilen sayinin en buyugu = %d\n",max(x,i));


}
int max (int *a, int b)
{
    a = malloc(10*sizeof(int));
    srand(time(NULL));
    for (b=0;b<10;b++){
        *a = rand()%100 + 1;
        a++;
        
    }
    a-=10;
    for (b=0;b<10;b++){
        printf("%d\n",*a);
        a++;
        
    }
    a-=10;
    int max = 0;
     for (b=0;b<10;b++){
        if(max<*a){
            max=*a;
            
        }
        a++;
        
    }
    return max;

}