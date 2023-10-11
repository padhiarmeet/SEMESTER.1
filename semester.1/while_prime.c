#include<stdio.h>
void main(){
    int i=0,n,count;
    printf("enter a number ");
    scanf("%d",&n);
    while(i<n){
        if(n%i==0){
            printf(" not prime");
            count=1;
            i++;
        }
        else{
            count=0;
        i++;
        }
        
    }
     if(count==1){
            printf("number is prime .");
        }
        else{
            printf("number is prime .");
        }
}