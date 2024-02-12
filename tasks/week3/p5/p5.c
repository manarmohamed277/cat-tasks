#include <stdio.h>
void fib(int n){
    int a=0,b=1,res;
    for(int i=1;i<=n;i++){
        printf("%d",a);
        res=a+b;
        a=b;
        b=res;
    }
}
int main() {
    int n;
   printf("enter your number: ");
    scanf("%d",&n);
    fib(n);
    return 0;
}
