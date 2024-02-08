#include <stdio.h>
int main() {
    int x,y,z;
    int max=0;
    printf("this program finds the maxmum of three numbers\n");
    printf("enter the first number\n");
    scanf("%d",&x);
     printf("enter the second number\n");
    scanf("%d",&y);
     printf("enter the third number\n");
    scanf("%d",&z);
    if(x==y&&x==z)
    printf("numbers are equal");
    else{
    max=(x>y&&x>z)?x:(y>x&&y>z)?y:z;
    printf("maximum number is:%d",max);}
    return 0;
}