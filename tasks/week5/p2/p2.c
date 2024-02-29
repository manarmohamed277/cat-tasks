#include <stdio.h>
int fun(int*p1,int*p2){
    int sum=*p1+*p2;
    return sum;
}
int main() {
    int x,y;
    printf("enter two values : ");
    scanf("%d %d",&x,&y);
     printf("sum= %d", fun(&x,&y));
    return 0;
}