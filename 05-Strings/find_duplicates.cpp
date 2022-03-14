#include <stdio.h>
#include <iostream>

using namespace std;

int main() {

    int A[] = {3,6,8,8,10,12,15,15,15};
    int n = (int)(sizeof(A)/sizeof(int));

    int i;
    int j;

    for(i = 0; i < n - 1; i++) {
        if(A[i] == A[i+1]) {
            j = i + 1;
            while(A[i] == A[j])
                j++;
            printf("%d is appearing %d times\n", A[i], j-i);
            i = j - 1;
        }
    }

    return 0;
}
