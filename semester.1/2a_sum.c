#include<stdio.h>
void main(){
    int a[100][100],b[100][100],c[100][100],i,j,n,r,k;
    printf("enter number of row= ");
    scanf("%d",&r);
    printf("enter number of colem= ");
    scanf("%d",&k);
    for(i=1;i<=r;i++){
        for(j=1;j<=k;j++){
            printf("enter value of a[%d][%d]= ",i,j);
            scanf("%d",&a[i][j]);
        }
         
    }
    for(i=1;i<=r;i++){
        for(j=1;j<=k;j++){
            printf("%d\t",a[i][j]);
            
        }
   
printf("\n");
    }
     printf("enter number of row= ");
    scanf("%d",&r);
    printf("enter number of colem= ");
    scanf("%d",&k);
    for(i=1;i<=r;i++){
        for(j=1;j<=k;j++){
            printf("enter value of b[%d][%d]= ",i,j);
            scanf("%d",&b[i][j]);
        }
         
    }
    for(i=1;i<=r;i++){
        for(j=1;j<=k;j++){
            printf("%d\t",b[i][j]);
            
        }
   
printf("\n");
    }
     for(i=1;i<=r;i++){
        for(j=1;j<=k;j++){
            c[i][j]=a[i][j]+b[i][j];

            printf("%d\t",c[i][j]);
        }
        printf("\n");
     }
}