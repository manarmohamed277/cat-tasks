#include <stdio.h>
int main() {
  int m;
  int tax;
printf("please enter your money :\n");
scanf("%d",& m);
tax=m+m*5/100;
printf("with tax added : %d",tax);
    return 0;
}