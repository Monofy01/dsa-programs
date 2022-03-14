#include <stdio.h>
#include <iostream>

using namespace std;

int main() {

    int i;
    int j;
    int k = 10;

    int A[] = {6,3,8,10,16,7,5,2,9,14}; 
    int n = (int) (sizeof(A) / sizeof(int));

    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(A[i] + A[j] == k) {
                printf("%d + %d = %d \n", A[i], A[j], k);
            }
        }
    }

   return 0;
}
