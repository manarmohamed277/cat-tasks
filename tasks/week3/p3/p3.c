#include <stdio.h>
int fun(int n){
  static int count=0;
    count++;
    n=n/10;
    if (n!=0) fun(n);
    return count;
}
int main() {
    int n;
    printf("enter your number: ");
    scanf("%d",&n);
    printf("number of digits in your number are:%d",fun(n));
    return 0;
}
