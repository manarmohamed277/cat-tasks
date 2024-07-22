//
// Created by user on 7/19/2024.
//

#ifndef Q_QUEUE_H
#define Q_QUEUE_H
#define MAXQUEUE 10
typedef struct {
    int front;
    int rear;
    int entry[MAXQUEUE];
    int size;
}queue ;

 typedef int type_entry;

void createQueue(queue*qp);
void  append(queue*qp,int item);
void serve(int *item,queue*qp);
int queueEmpty(queue*qp);
int queueFull(queue*qp);
int queueSize(queue*qp);
void clearQueue(queue *qp);


void displayQueue(int item);
void traverseQueue(queue*qp,void (*ptr)(int item));
#endif //Q_QUEUE_H
