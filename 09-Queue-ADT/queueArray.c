#include <stdio.h>
#include <stdlib.h>git

struct Queue {
    int size;
    int front;
    int rear;
    int *Q;
};

void create(struct Queue *q, int size) {
    q->size = size;
    q->front=q->rear=-1;
    q->Q=(int *)malloc(q->size*sizeof(int));
}

void enqueue(struct Queue *q, int x) {
    if(q->rear == q->size-1)
        printf("Queue is Full");
    else {
        q->rear++;
        q->Q[q->rear] = x;
    }
}

int main() {
    struct Queue q;
    create(&q,5);


    return 0;
}
