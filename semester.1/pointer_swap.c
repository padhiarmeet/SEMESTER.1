
#include<stdio.h>
void main(){
    int *ptr1,*ptr2,temp,n1,n2;
    ptr1=&n1;
    ptr2=&n2;
    
    printf("enter value of n1= ");
    scanf("%d",&n1);
     printf("enter value of n2= ");
    scanf("%d",&n2);
   temp=*ptr1;
   *ptr1=*ptr2;
   *ptr2 =temp;
    printf("%d %d",*ptr1,*ptr2);
    
   

}