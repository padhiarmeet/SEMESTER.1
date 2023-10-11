#include<stdio.h>
void main(){
    int a = 0, b = 1,s,n,i;
    printf("numbers: ");
    scanf("%d",&n);
    for(i = 1;i <= n;i++){
        s = a + b;
        printf("%d, ",s); 
        a = b;
        b = s;
    }
    printf("\n");
}