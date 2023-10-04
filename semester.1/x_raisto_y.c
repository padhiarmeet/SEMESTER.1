include<stdio.h>
void main(){
    int x,y,n,i;
    printf("enter a numbre and its power= ");
    scanf("%d %d",&x,&y);
    n=x;
    while(i<=y){
        n=n*x;
        i++;
    }
    printf("%d",x);
}