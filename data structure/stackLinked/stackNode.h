//
// Created by user on 7/14/2024.
//

#ifndef UNTITLED_STACKNODE_H
#define UNTITLED_STACKNODE_H

typedef int entry_type ;
typedef struct {
    entry_type entry;
    struct stackNode * next;
}stackNode;

typedef struct {
    stackNode *top;

    int size;
}stack;


void creatStack(stack*sp);
void push(entry_type item,stack *sp);
void pop(entry_type *pe,stack*sp);
int stackEmpty(stack*sp);
int stackFull(stack*sp);
void clearStack(stack*sp);
void display (entry_type item);
void traverseStack(stack *sp ,void (*pnt)(entry_type));
int stackSize(stack *sp);


#endif //UNTITLED_STACKNODE_H
