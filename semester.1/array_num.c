#include<stdio.h>
void main(){
    int i,n,arr[1399];
    printf("size of array= ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("enter element to arr[%d]= ",i,arr[i]);
        scanf("%d",&arr[i]);
    }
    for(i=n;i>0;i--){
        printf("%d",arr[i]);
    }
}