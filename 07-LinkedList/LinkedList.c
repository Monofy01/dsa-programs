#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct Node {
    int data;
    struct Node *next;
}*first = NULL;

void create(int A[], int n) {
    int i;
    struct Node *t;
    struct Node *last;

    first = (struct Node*)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for(i = 1; i < n; i++) {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void display(struct Node *p) {
    while(p != NULL) {
        printf("%d ", p->data);
        p=p->next;
    }
}

void Rdisplay(struct Node *p) {
    if(p!=NULL) {
        printf("%d ", p->data);
        Rdisplay(p->next);
    }
}

int count(struct Node *p) {
    int l = 0;
    while(p) {
        l++;
        p=p->next;
    }
    return l;
}
  
int Rcount(struct Node *p) {
    if(p != NULL)
        return Rcount(p->next) + 1;
    else
        return 0;
}

int sum(struct Node *p) {
    int s = 0;

    while(p != NULL) {
        s += p->data;
        p = p->next;
    }
    return s;
}

int Rsum(struct Node *p) {
    if(p == NULL)
        return 0;
    else
        return Rsum(p->next) + p->data;
}

int max(struct Node *p) {
    int max = INT_MIN;
    
    while(p) {
        if(p->data > max)
            max = p->data;
        p = p->next; 
    }
    return max;
}

int Rmax(struct Node *p) {
    int x = 0;
    if(p == 0) 
        return INT_MIN;
    x = Rmax(p->next);
    if(x > p->data)
        return x;
    else
        return p->data;
    
}

struct Node * LSearch(struct Node *p, int key) {
    while(p != NULL) {
        if(key == p->data) 
            return p;
        p = p->next;
    }
    return NULL;
}

struct Node * RSearch(struct Node *p, int key) {
    if(p == NULL)
        return NULL;
    if(key == p->data)
        return p;
    return RSearch(p->next, key);
}

int main() {
    struct Node *temp;
    int A[] = {3,5,7,10,25,8,32,2};
    create(A, 8);
    //Rdisplay(first);
    //display(first);
    //printf("Length is %d\n\n", Rcount(first));
    //printf("Sum is %d\n\n", Rsum(first));
    //printf("Max is %d\n", Rmax(first));
    
    temp = RSearch(first, 25);
    if(temp)
        printf("Key is found %d", temp->data);
    else
        printf("Key not found");

    return 0;
}
