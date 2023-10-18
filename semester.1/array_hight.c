#include<stdio.h>
void main(){
    int i,j,n,a[5],b[5],c=0,co;
    for(i=0;i<5;i++){
        printf("enter value of hight array a[%d]= ",i);
        scanf("%d",&a[i]);
    }
         for(i=0;i<5;i++){
        printf("enter value of weight array b[%d]= ",i);
        scanf("%d",&b[i]);
        if(a[i]>170 && b[i]<50){
            c++;
        }
      
    }
    printf("student count= %d",c);
 } 
    