#include <stdio.h>
int main(void) {
    int n,num,i=0,r=0,d=0;
    int e;
    printf("enter the binary number: ");
    scanf("%d",&num);
    n=num;
    while(n){
        r=n%10;
        e=r*(1<<i);
        d+=e;
        n/=10;
        i++;
    }
    printf("%d in decimal=%d",num,d);
    return 0;
}
