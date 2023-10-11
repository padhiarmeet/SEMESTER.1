#include<stdio.h>
void main(){
    int n,sum=0,rem=0,a;
    printf("enter a number= ");
    scanf("%d",&n);
    a=n;
    while(n!=0){
        rem=(rem*10)+(n%10)~;
        n=n/10;
    }
    if(rem==a){
        printf("this is pelendrom number");
    }
    else{
        printf("this is not pelendrom number.");
    }
}