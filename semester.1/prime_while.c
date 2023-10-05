#include<stdio.h>
void main(){
    int a=2,i,n,d=2;
    printf("enter a number= ");
    scanf("%d",&n);
    while(a<=n){
        if(n%d==0){
           
            printf("this number is not prime.");
            
        }
       else {printf("this is prime number.");}
       }
        a++;
    }
