#include <stdio.h>
#include <iostream>

using namespace std;

int main() {

    int min;
    int max;

    int A[] = {5,8,3,9,6,2,10,7,-1,4};
    int n;

    int i;
    
    min = A[0];
    max = A[0];
    n = (int)(sizeof(A)/sizeof(int));
    for(i = 1; i < n; i++) {
        if(A[i] < min) 
            min = A[i];
        if(A[i] > max)
            max = A[i];
    }

    printf("%d max and %d min ", max, min);

    return 0;
}
