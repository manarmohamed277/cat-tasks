#include <stdio.h>

int main(void) {
    char f;
    int n,p;
    do{
        int m=1;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Enter the power:");
    scanf("%d",&p);
    while (p--){
        m*=n;
    }
    printf("Answer = %d\n",m);
    printf("Enter Y to proceed or press any key to exit\n");
        scanf(" %c",&f);}
    while (f=='Y'||f=='y');

    return 0;
}
