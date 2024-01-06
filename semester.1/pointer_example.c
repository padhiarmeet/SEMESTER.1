#include<stdio.h>
void main(){
    int *a=&n,n=123;
    char *ch=&k,k='a';
    float *fl=&l,l=2.456;
    double *dl=&d,d=123;
     printf("\n%d",*a);
    
    printf("\n_____________");
     printf("\n%f",*fl);
    
    printf("\n_____________");
     printf("\n%c",*ch);
    
    printf("\n_____________");
     printf("\n%lf",*dl);
}