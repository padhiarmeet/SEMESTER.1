#include<stdio.h>
void main(){
    int x,y,n,i;
    printf("enter a numbre and its power= ");
    scanf("%d %d",&x,&y);
    n=x;
    for(i=0;i<=y;i++){
        n=n*x;
       
    }
    printf("%d",n);
}