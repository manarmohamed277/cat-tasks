//
// Created by user on 8/13/2024.
//
#include "global.h"
#ifndef GLOBAL_QUEUE_H
#define GLOBAL_QUEUE_H

#if IMPLEMENTATION_TYPE ==2
typedef struct {
    entry_type entry;
    struct queueNode * next;
}queueNode;


typedef struct {
    queueNode * front;
    queueNode * rear;
    int size;
}queue;
#elif IMPLEMENTATION_TYPE ==1
typedef struct {
    int front;
    int rear;
    int entry[MAXQUEUE];
    int size;
}queue ;
#endif
void creatQueue(queue*qp);
void append(entry_type item, queue*qp);
void serve(entry_type*item,queue*qp);
int queueEmpty(queue*qp);
int queueFull(queue*qp);
void clearQueue(queue*qp);
void traverseQueue(queue*qp,void(*ptr)(entry_type));
#endif //GLOBAL_QUEUE_H
