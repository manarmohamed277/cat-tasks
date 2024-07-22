#include <stdio.h>
#include "stackArr.h"

int main(void) {
   stack s;
    creatStack(&s);
    push(5,&s);
    int item;
    stackTopUser(&item,&s);
    printf("%d",item);
    int d=stackSize(&s);
    printf("%d",d);

    return 0;
}
