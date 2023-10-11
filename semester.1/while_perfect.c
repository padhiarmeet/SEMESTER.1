#include<stdio.h>
void main(){
    int i,n,sum;
    printf("enter a number =");
    scanf("%d",&n);
    sum=0;
    while(i<n){
        if(n%i==0){
            sum=sum+i;

        }
        i++;
        if(sum==n){
            printf("number is perfect.");
        }
        else{
            printf("number is not prime.");
        }
    }
}