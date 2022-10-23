#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,b,c;
    int ek,eb;
    printf("Uc adet sayi giriniz:");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b && a<c && b<c){
          ek = a;
          eb = c; 
          printf("En kucuk = %d En buyuk = %d",a,c);
    }
   
    else if(b<a && b<c && a<c){
          ek = b;
          eb = c;
          printf("En kucuk = %d En buyuk = %d",b,c);
    }
   
    else if(c<b && b<a && c<a){
          ek = c;
          eb = a;
          printf("En kucuk = %d E buyuk = %d",c,a);
    }
    
}

