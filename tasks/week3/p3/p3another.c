#include <stdio.h>
int main() {
    int n,count=0;
    printf("enter your number: ");
    scanf("%d",&n);
    do{
         n=n/10;
        count++;
    }
    while(n!=0);
    printf("number of digits in your number are:%d",count);
    return 0;
}
