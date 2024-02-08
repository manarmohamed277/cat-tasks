#include <stdio.h>
int main() {
    int n,t;
    int fact=1;
   printf("this program calculates the factorial of an integer");
   printf("enter the number\n");
   scanf("%d",&n);
   t=n;
   while(n>1){
   fact*=n;
   n--;
   }
   printf("factorial of %d = %d",t,fact);
}