#include<stdio.h>
void main(){
    int n=123,*a;
    a=&n;
    printf("%d",*a);
    printf("\n%d",a);

}