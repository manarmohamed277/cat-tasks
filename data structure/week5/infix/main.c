#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include "stack.h"

int pre(char i){
    if (i=='+'|| i=='-' )
        return 1;
    else if (i=='*'||i=='/')
        return 2;
    else
        return 0;
}

int isOperand (char i){
    if(i=='+'||i=='-'||i=='*'||i=='/')
        return 0;
        else
        return 1;

}

char* intoPost(char*infix) {
    int len = strlen(infix);
    char *postfix = (char *) malloc(len + 2);
    int i = 0, j = 0;
    stack st;
    creatStack(&st);
    push('\0',&st);
    while (infix[i]) {
        if (isOperand(infix[i]))
            postfix[j++] = infix[i++];
        else if (pre(infix[i]) > pre(stackTop(&st)))
            push(infix[i++], &st);
        else
            pop(&postfix[j++], &st);
    }

    while (!stackEmpty(&st)) {
        pop(&postfix[j++], &st);
    }
    postfix[j]='\0';
    return postfix;
}

int main(void) {
 char *infix="a+b*c";
 char *postfix= intoPost(infix);

    printf("%s",postfix);
    return 0;
}
