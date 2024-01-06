#include<stdio.h>
void main(){
    int n,i=1,sum=0;
    printf("enter a number which you whant to go for series= ");
    scanf("%d",&n);

    while(i<=n){
        if(i%2==0){
            sum-=i;
         else{sum+=i}
        }
       sum=sum+i;
    }
    printf("sum= %d",sum);
}