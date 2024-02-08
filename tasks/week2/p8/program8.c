#include <stdio.h>
int main() {
    int n;
   printf("this program calculates the factorial of an integer");
   printf("enter the number\n");
   scanf("%d",&n);
   for(int i=1;i<=12;i++){
       printf("%dx%d=%d\n",n,i,n*i);
   }
}