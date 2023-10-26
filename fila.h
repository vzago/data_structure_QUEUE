#ifndef QUEUE_H
#define QUEUE_H

#define SUCESS 1
#define NOT_EXIST -1
#define EXIST -2
#define INVALID -3
#define FULL -4
#define EMPTY -5

typedef struct Q_NODE {
    int element;
    struct Q_NODE *prox;
} Q_NODE;

typedef struct QUEUE {
    Q_NODE *beginning;
    Q_NODE *end;
} QUEUE;

int empty_queue(QUEUE *Q);
void start_queue(QUEUE *Q);
void enqueue(QUEUE *Q, int e);
int dequeue(QUEUE *Q);
void print_queue(QUEUE *Q);
void clear_Queue(QUEUE *Q);

#endif