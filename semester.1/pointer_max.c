#include<stdio.h>
int max(int,int,int);
void main(){
    int a,b,c;
    printf("enter two numbers= ");
    scanf("%d %d",&a,&b);
    int max=max(a,b)
}
int max(int a,int b){
    (a>b)?printf("a is maximun\nb is minimum"):printf("b is maximun\na is minimum")
}