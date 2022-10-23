#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,delta,x1,x2;
    printf("ax2+bx+c seklindeki bir denklemin koklerini yaziniz.");
    
    printf("\na = ");
    scanf("%f",&a);
    printf("\nb = ");
    scanf("%f",&b);
    printf("\nc = ");
    scanf("%f",&c);

    delta = (b*b) - (4*a*c);
    printf("Delta = %2.f\n",delta);
    x1 = (-b - sqrt(delta)) / (2*a);
    x2 = (-b + sqrt(delta)) / (2*a);
    printf("x1 = %2.f x2 = %2.f",x1,x2);

    if(x1>x2){
        printf("\n En buyuk kok = %2.f",x1);

    }
    else 
     printf("\nEn buyuk kok = %2.f",x2);
    }




