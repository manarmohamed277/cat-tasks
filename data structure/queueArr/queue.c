#include <stdio.h>
#include "queue.h"
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
}
