#include <stdio.h>
#include <iostream>

using namespace std;

int main() {

    int A[] = {3,6,8,8,10,12,15,15,15,20};
    int n = (int)(sizeof(A)/sizeof(int));

    int h = A[n-1];
    int i;

    int H[h+1] = {0};

    for(i = 0; i < n; i++) 
        H[A[i]]++;

    for(i = 0; i <= h; i++)
        if(H[i] > 1)
            printf("\ni: %d value: %d \n", i, H[i]);


    return 0;
}
