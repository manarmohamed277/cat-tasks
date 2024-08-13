#include <stdio.h>
#include "stack.h"
#include "queue.h"
int main(void) {
    student s1,temp;
    s1.age=12;
   s1.name="manar";
    stack s;
    creatStack(&s);
    push(s1,&s);
    pop(&temp,&s);
    printf("%d",temp.age);

    return 0;
}
