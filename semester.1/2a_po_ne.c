#include<stdio.h>
void main(){
    int a[100][100],i,j,n,p=0,na=0;
    printf("enter number of arry= ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("enter value of a[%d][%d]= ",i,j);
            scanf("%d",&a[i][j]);
            if(a[i][j]<0){
                na++;
            }
            else{
                p++;
            }
        }
         
    }

   
printf("\n");
    
    printf("\npositive numbers= %d",p);
    printf("\nnegetive numbers= %d",na);
}