#include <stdio.h>

int main(void) {
    int n,bit,res;
    int x=6;

    printf("\nEnter any number: ");
    scanf("%d", &n);
    printf("Enter nth bit to check (0->31) : ");
    scanf("%d", &bit);
    res = (n>>bit) & 1;
    printf("%d", res);
    return 0;
}
