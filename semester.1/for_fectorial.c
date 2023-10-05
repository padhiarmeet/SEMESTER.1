#include<stdio.h>
void main(){
    int i,n,a=1;
    printf("enter a number = ");
    scanf("%d",&n);


    for(i=1;i<=n;i++){
        a=a*i;
        i++;
    }
    printf("%d",a);
}