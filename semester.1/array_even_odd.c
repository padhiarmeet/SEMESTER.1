#include<stdio.h>
void main(){
    int even=0,i,odd=0,n,a[1000];
    printf("enter numbers of arrays= ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("enter value of a[%d]= ",i);
        scanf("%d",&a[i]);
        if(a[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("even numbers=%d,odd numbers=%d",even,odd);
}