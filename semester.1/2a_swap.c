#include<stdio.h>
void main(){
    int n,a[100],b[100],i;

    printf("enter a number= ");
   scanf("%d",&n);
    for(i=1;i<=n;i++){
        
        printf("enter value of a[%d]= ",i);
        scanf("%d",&a[i]);

    }
    for(i=1;i<=n;i++){
        b[i]=a[n-i];
        a[i]=b[i];

        
    }
       for(i=0;i<n;i++){
        printf("\nenter value of a[%d]= %d",i,a[i]);
       
       }

}