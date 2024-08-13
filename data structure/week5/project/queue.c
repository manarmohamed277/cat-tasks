//
// Created by user on 8/13/2024.
//
#include <stdio.h>
#include <malloc.h>
#include "queue.h"
#if IMPLEMENTATION_TYPE ==1
void createQueue(queue*qp){
    qp->front=0;
    qp->rear=-1;
    qp->size=0;
}
void append(queue*qp, type_entry item){
    qp->rear=(qp->rear+1)%MAXQUEUE;
    qp->rear=item;
    qp->size++;
}

void serve(type_entry *item, queue*qp){
    *item=qp->entry[qp->front];
    qp->front=(qp->front+1)%MAXQUEUE;
    qp->size--;
}


type_entry queueEmpty(queue*qp){
    return !qp->size;
}

type_entry queueFull(queue*qp){
    /* if((qp->rear+1)%MAXQUEUE==qp->front)
         return 1;
     else
         return 0;*/
    return (qp->size==MAXQUEUE);
}
type_entry queueSize(queue*qp){
    return qp->size;
}

void clearQueue(queue *qp){
    qp->front=-0;
    qp->size=0;
    qp->rear=-1;
}


void displayQueue(type_entry item){
    printf("%d",item);
}
//initial condition : it is not recquired for the queue to be initialized
void traverseQueue(queue*qp,void (*ptr)(type_entry item)){
    type_entry pos=qp->front;
    for(type_entry s=0; s < qp->size; s++){
        (*ptr)(qp->entry[pos]);
        pos=(pos+1)%MAXQUEUE;
    }

#elif    IMPLEMENTATION_TYPE ==2
void creatQueue(queue*qp){
    qp->front=  NULL;
    qp->rear=NULL;\
    qp->size=0;
}

void append(entry_type item,queue*qp){
    queueNode *pn=(queueNode*)malloc(sizeof (queueNode));
    pn->entry=item;
    pn->next= NULL;

    if(qp->rear==NULL)
        qp->front=pn;
    else
    qp->rear->next=pn; //run time error in the first time

    qp->rear=pn;
    qp->size++;

}

void serve(entry_type*item,queue*qp){
    *item=qp->front->entry;
    queueNode *ptr=qp->front;
    qp->front=qp->front->next;
    free(ptr);
    if(qp->front==NULL) //if there is only one element
        qp->rear=NULL;
    qp->size--;
}

int queueEmpty(queue*qp){
    return (qp->front==NULL);
}
 int queueFull(queue*qp){
     return 0;
}
 int queueSize(queue *qp){
   return qp->size;
}

void clearQueue(queue*qp){
queueNode *ptr=qp->front;
while(ptr){
    ptr=ptr->next;
    free(qp->front);
    qp->front=ptr;
}
qp->rear=NULL;
qp->size=0;
}

void clearQueueMODYFIED(queue*qp){
    while(qp->rear){
        qp->rear=qp->front->next;
        free(qp->front);
        qp->front=qp->rear;
    }
    qp->size=0;
}


void traverseQueue(queue*qp,void(*ptr)(entry_type)){
queueNode *qptr=qp->front;
while(qptr){
    (*ptr)(qptr->entry);
    qptr=qptr->next;
}
}








#endif
