#include <stdio.h>

int main() {
    int n, sal;
    printf("enter number of your working hours\n");
    scanf("%d",&n);
   
    if (n<40)
        sal=45*n;
    else
    sal=50*n;
    printf("your salary is:%d",sal);

    return 0;
}