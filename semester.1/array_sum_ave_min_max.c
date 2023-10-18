#include<stdio.h>
void main(){
    int i,j,n,a[1000],sum=0,ave;
    printf("enter size of array= ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
     ave=sum/n;
     printf("avarage=%d,sum=%d",ave,sum);
    }