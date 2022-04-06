#include <stdio.h>
#include <stdlib.h>

struct Stack {
    int size;
    int top;
    int *S;
};

void create(struct Stack *st) {
    printf("Enter Size ");
    scanf("%d", &st->size);
    st->top = -1;
    st->S = (int *)malloc(st->size * sizeof(int));
}

void Display(struct Stack st) {
    int i;
    for(i = st.top; i >= 0; i--)
        printf("%d ", st.S[i]);
    printf("\n")
}

int push(struct Stack *st, int x) {
    if(st->top == st->size - 1)
        printf("Stack overflow\n");
    else {
        st->top++;
        st->S[st->top] = x;
    }
}

int main() {

}
