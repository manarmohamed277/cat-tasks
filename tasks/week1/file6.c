#include <stdio.h>
int main() {
int x,y;
 printf("enter the first number:\n");
 scanf("%d",&x);
 printf("enter the second number:\n");
 scanf("%d",&y);
 printf("1.arithmetical operations:\nx*y=%d\nx/y=%d\nx+y=%d\nx-y=%d\n",x*y,x/y,x+y,x-y);
 printf("2.logical operations:\nx&&y=%d\nx||y=%d\n!x=%d\n!y=%d\n",x&&y,x||y,!x,!y);
 printf("3.bitwise operations:\nx&y=%d\nx|y=%d\nx^y=%d\ny>>1=%d",x&y,x|y,x^y,y>>1);
    return 0;
}