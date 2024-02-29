#include <stdio.h>
int main() {
    int x=10; int *p;
    printf("valeu before changing: %d\n",x);
    p=&x;
    *p=20;
     printf("value after changing: %d",x);
    return 0;
}