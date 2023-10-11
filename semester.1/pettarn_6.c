#include<stdio.h>
void main(){
    float i,j,n,mul=1,k,sum=0;
    printf("enter a number= ");
    scanf("%f",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            mul=mul*j;
        }
        k=1/mul;
        sum=sum+k;
    }
    printf("%f",sum);
}