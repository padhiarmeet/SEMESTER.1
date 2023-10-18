#include<stdio.h>
#include<math.h>
void main(){
    int i,n,a[1000],sum=0,ave,mul=1,A;
    printf("enter number of array= ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        printf("value of a[%d]= ",i);
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    ave=sum/n;
    for(i=1;i<=n;i++){
        mul=mul*a[i];
        
    }
    A=root(ave);
    printf("%d",A);
}