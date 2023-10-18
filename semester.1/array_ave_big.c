#include<stdio.h>
void main(){
    int i,n,a[1000],sum=0,ave,count=0;
    printf("enter number of array= ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        printf("value of a[%d]= ",i);
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    ave=sum/n;
     for(i=1;i<=n;i++){
        if(a[i]>ave){
           count++;
        }
     }
     printf("%d",count);
}