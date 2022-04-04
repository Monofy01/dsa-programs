#include <stdio.h>
#include <stdlib.h>


struct Node {
    struct Node *prev;
    int data;
    struct Node *next;
}*first=NULL;

void create(int A[], int n) {
    struct Node *t;
    struct Node *last;
    int i;

    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->prev = first->next=NULL;
    last = first;

    for(i=1;i<n;i++) {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = last->next;
        t->prev = last;
        last->next = t;
        last = t;
    }
}


int main() {
    int A[] = {10,20,30,40,50};
    create(A,5);
    return 0;
}
