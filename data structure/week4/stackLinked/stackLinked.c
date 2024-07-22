#include <stdio.h>
#include <malloc.h>
#include "stackNode.h"
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

