
#include <stdio.h>
int x,y;
void swap(){
    int z=x;
    x=y;
    y=z;
}
int main() {
    printf("enter two numers to swap them\n");
    printf("enter the first number: ");
    scanf("%d",&x);
    printf("enter the second number: ");
    scanf("%d",&y);
    swap();
    printf("numbers after swap:\n %d  %d",x,y);
    return 0;
}
