#include <stdio.h>
int maxf(int x,int y){
    if (x==y) printf("two equal numbers");
    int max=(x>y)?x:y;
    return max;
}
int main() {
    int x,y;
    int max=0;
    printf("enter two numers to get the maximum of them\n");
    scanf("%d\n%d",&x,&y);
    printf("the maximum number is %d",maxf(x,y));
    return 0;
}
