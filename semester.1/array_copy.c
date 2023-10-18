#include<stdio.h>
void main(){
 char a[100],b[100];
 printf("enter value of b = ");
 gets(b);
 int i;
 for(i=0;i!=2;i++){
    a[i]=b[i];

 }
    a[i]='\0';
    printf("%s",a);
}