#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Array {
    int *A;
    int size;
    int length;
};

void Display(struct Array arr) {
    int i;
    printf("\nElements are\n");
    for(i = 0; i < arr.length; i++)
        printf("%d ", arr.A[i]);
}


int main() {
    
    // INIT
    struct Array arr;
    int n;
    int i;
    printf("Enter size of an array");
    scanf("%d", &arr.size);

    arr.A = (int *)malloc(arr.size * sizeof(int));
    arr.length = 0;

    printf("Enter number of numbers");
    scanf("%d", &n);
    
    printf("Enter all Elements\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr.A[i]);
    arr.length = n;

    Display(arr);


    return 0;
}

