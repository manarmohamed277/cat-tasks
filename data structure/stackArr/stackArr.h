//
// Created by user on 7/22/2024.
//

#ifndef UNTITLED_STACKARR_H
#define UNTITLED_STACKARR_H
typedef int entry_type;
#define MAX_SIZE 10
typedef struct {
    entry_type entry[10];
    int top;
}stack;

void creatStack(stack*sp);
void push(entry_type item,stack *sp);
int stackFull(stack* s);
int stackEmpty(stack* sp);
void pop(entry_type *item,stack*sp);
int stackTop(stack*sp);
int stackSize(stack*sp);
void clearStack(stack*sp);
void display(entry_type sItem);
void traverseStack(stack*sp,void (*ptr)(entry_type));
void stackTopUser(entry_type * item,stack *sp);
void destroyStackUser(stack*sp);
#endif //UNTITLED_STACKARR_H
