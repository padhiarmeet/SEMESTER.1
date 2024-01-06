#include<stdio.h>
void main(){
    int a[100][100],i,j,n;
    printf("enter number of arry= ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("enter value of a[%d][%d]= ",i,j);
            scanf("%d",&a[i][j]);
        }
         
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("%d\t",a[i][j]);
            
        }
   
printf("\n");
    }
}