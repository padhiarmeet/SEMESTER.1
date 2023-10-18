#include<stdio.h>
void main(){
    int count=0,c=0,n,a[1000];
    printf("enter numbers of arrays= ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("enter value of a[%d]=%d");
        scanf("%d",&a[i]);
        if(a[i>0]){
            count++;
        }
        else if(a[i]<0){
            c++;
        }
    }
    printf("positive numbers=%d,negative numbers=%d",count,c)
}