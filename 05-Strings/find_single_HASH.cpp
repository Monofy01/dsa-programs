#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    int A[] = {3,7,4,9,12,6,1,11,2,10};

    int n = (int)(sizeof(A)/sizeof(int));
    int l = A[0];
    int h = A[n-1];

    int i;

    //int *H = new int[h];
    int H[h] = {0};

    for(i = 0; i < n; i++)
        H[A[i]]++;
    for(i = l; i <= h; i++)
        if(H[i] == 0)
            printf("%d\n", i);

}
