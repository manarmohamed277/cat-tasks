//
// Created by user on 7/19/2024.
//

#ifndef LINKEDQ_LINKEDQ_H
#define LINKEDQ_LINKEDQ_H
typedef int queueEntry;
typedef struct {
    queueEntry entry;
    struct queueNode * next;
}queueNode;


typedef struct {
    queueNode * front;
    queueNode * rear;
    int size;
}queue;

void creatQueue(queue*qp);
void append(queueEntry item,queue*qp);
void serve(queueEntry*item,queue*qp);
int queueEmpty(queue*qp);
int queueFull(queue*qp);
void clearQueue(queue*qp);
void traverseQueue(queue*qp,void(*ptr)(queueEntry));
#endif //LINKEDQ_LINKEDQ_H
