#include<stdio.h>
void main(){
    int i,j,n,a[1000],sum=0,ave,max,min;
    printf("enter size of array= ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
     ave=sum/n;
     printf("avarage=%d,sum=%d",ave,sum);
     max=a[0];
     min=a[0];
    for(i=0;i<n;i++){
        if(max>a[i]){
            max=a[i];
        }
        }
        for(i=0;i<n;i++){
        if(min<a[i]){
            min=a[i];
        }
        }
        printf("minimum number= %d",min);
        printf("maximum number= %d",max);
    }
    