//
// Created by user on 8/13/2024.
//
#include "global.h"
//#ifndef GLOBAL_STACK_H
//#define GLOBAL_STACK_H

#if IMPLEMENTATION_TYPE ==1
typedef struct {
    entry_type entry[10];
    int top;
}stack;
#elif IMPLEMENTATION_TYPE ==2
typedef struct {
    entry_type entry;
    struct stackNode * next;
}stackNode;

typedef struct {
    stackNode *top;

    int size;
}stack;
#endif
void creatStack(stack*sp);
void push(entry_type item,stack *sp);
int stackFull(stack* s);
int stackEmpty(stack* sp);
void pop(entry_type *item,stack*sp);
entry_type stackTop(stack*sp);
int stackSize(stack*sp);
void clearStack(stack*sp);
void display(entry_type sItem);
void traverseStack(stack*sp,void (*ptr)(entry_type));
void stackTopUser(entry_type * item,stack *sp);
void destroyStackUser(stack*sp);


//#endif //GLOBAL_STACK_H
