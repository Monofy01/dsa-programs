#include <stdio.h>
#include <iostream>
using namespace std;

int main() {

    int A[] = {6,7,8,9,11,12,15,16,17,18,19};
    int size = (int) (sizeof(A) / sizeof(int));
    
    int i;

    int l = A[0];
    int h = A[size-1];
    
    int diff = l - 0;

    for(i = 0; i < size; i++) {
        if(A[i]-i != diff) {
            while(diff < A[i]-i) {
                printf("missing element %d \n", i + diff);
                diff++; 
            }
        }
    }

}
