#include <stdio.h>

int main(void) {
    int num;
    int z=0,o=0;
    printf("enter the number:");
    scanf("%d",&num);
        for(int i=0;i<sizeof (int)*8;i++){
        if(num&1)
        o++;
        else z++;
        num>>=1;
    }
        printf("total one bits = %d\ntotal zero bits=%d",o,z);

    return 0;
}
