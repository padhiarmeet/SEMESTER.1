#include<stdio.h>
void main(){
    int a[20][2],i,j,n;
    
    for(i=0;i<20;i++){
        for(j=0;j<2;j++){
            printf("enter value of a[%d][%d]= ",i,j);
            scanf("%d",&a[i][j]);
        }
         
    }
    for(i=0;i<4;i++){
        for(j=0;j<2;j++){
            printf("%d\t",a[i][j]);
            
        }
   
printf("\n");
    }
}