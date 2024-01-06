#include<stdio.h>
void main(){
    int n,arr[100],i,*ptr;
    printf("enter number of array");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("enter value of arr[%d]= ",i);
        scanf("%d",&arr[i]);
}
for(i=1;i<=n;i++){
    ptr=&arr[i];
        printf("\nvalue of pointer=%d",*ptr);
       
}
}