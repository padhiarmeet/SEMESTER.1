//calcutate x power y without using power fector.
#include<stdio.h>
void main(){
    int x,y,i=1,tx,k=0,remender,sum,temp=1;
    printf("ener a number= ");
    scanf("%d",&x);
    tx=x;
    while(x!=0){
        x=x/10;
        k++;
    }
    x=tx;
    while(x!=0){
      remender=x%10;
      temp=1;
       for(i=1;i<=x;i++){
            k=k*remender;

       }
       sum=sum+temp;
    }
    if(k==tx){
        printf("arm");
    }
    else("not");
    
}