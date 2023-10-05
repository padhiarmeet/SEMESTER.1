#include<stdio.h>
void main(){
    int a,l;
    printf("enter a number= ");
    scanf("%d",&a);
    l=a%10;
    while(a>10){
        a=a/10;
 
    }
    printf("first digit= %d,last digit= %d",a,l);
    printf("%d",a+l);
}