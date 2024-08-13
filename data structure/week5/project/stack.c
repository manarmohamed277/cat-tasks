//
// Created by user on 8/13/2024.
//

#include "stack.h"
#include <stdio.h>
#include <malloc.h>
#if  IMPLEMENTATION_TYPE ==1
void creatStack(stack*sp){
    sp->top=0;
}

void push(entry_type item, stack *sp){
    sp->entry[sp->top++]=item;
}
int stackFull(stack* s){
    return s->top==MAX_SIZE;
}

int stackEmpty(stack* sp){
    //  return sp->top==0;
    return !sp->top;
}

void pop(entry_type *item, stack*sp){
    //sp->top--;
    *item=sp->entry[--sp->top];
}

entry_type stackTop(stack*sp){
    return sp->entry[sp->top-1] ;
}

int stackSize(stack*sp){
    return sp->top;

}

void clearStack(stack*sp){
    sp->top=0;
}

void display(entry_type sItem){
    printf("%d\n",sItem);
}

void traverseStack(stack*sp,void (*ptr)(entry_type)){
    for(int i=sp->top; i > 0; i--)
        (*ptr)(sp->entry[i-1]);
}


void stackTopUser(entry_type * item, stack *sp){
    pop(item,sp);
    push(*item,sp);
}
void destroyStackUser(stack*sp){
    creatStack(sp);
}
#elif  IMPLEMENTATION_TYPE ==2
void creatStack(stack*sp){
    sp->top=NULL;
    sp->size=0;
}


void push(entry_type item, stack *sp){
    stackNode *pn=(stackNode*)malloc(sizeof (stackNode));
    pn->entry=item;
    pn->next=sp->top;
    sp->top=pn;
    sp->size++;
}

void pop(entry_type *pe, stack*sp){
    stackNode*ptr;
    *pe=sp->top->entry;
    ptr=sp->top;
    sp->top=sp->top->next;
    free(ptr);
    sp->size--;
}
int stackEmpty(stack*sp){
    return sp->top==NULL;
}

int stackFull(stack*sp){
    return 0;
}

void clearStack(stack*sp){

    stackNode *pnt=sp->top;
    while (pnt){
        pnt=pnt->next;
        free(sp->top);
        sp->top=pnt;

    }
    sp->size=0;
}

/*void clearStacks(stack*sp){
    stackNode* pnt=sp->top;
    stackNode *pnt2=sp->top;

    while(pnt){
        pnt=pnt->next;
        free(pnt2);
        pnt2=pnt;
    }
    sp->top=NULL;
    sp->size=0;
}*/
void display (entry_type item){
    printf("%d\n",item);
}

void traverseStack(stack *sp ,void (*pnt)(entry_type)){
    stackNode *pn=sp->top;
    while (pn){
        (*pnt)(pn->entry);
        pn=pn->next;
    }
}
int stackSize(stack *sp){
    /*  stackNode *pnt=sp->top;
      int count =0;
      while (pnt){
           count++;
           pnt=pnt->next;
      }
      return count;*/
    return sp->size;
}
#endif