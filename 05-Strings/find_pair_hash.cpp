#include <stdio.h>
#include <iostream>

using namespace std;

int main() {

    int i;
    int k;

    int A[] = {6,3,8,10,16,7,5,2,9,14};
    int n = (int)(sizeof(A)/sizeof(int));

    int h = A[0];
    for(i = 1; i < n-1; i++) {
        if(A[i] > h)
            h = A[i];
    }

    int H[h+1] = {0}; 
    k = 10;

    for(i = 0; i < n; i++)
        H[A[i]]++;

    for(i = 0; i < n; i++) {
        if(H[k-A[i]] != 0 && k-A[i] > 0) {
            printf("%d + %d = %d\n", A[i], k-A[i], k);
        }
    }


    return 0; 
}
