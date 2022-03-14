#include <stdio.h>
#include <iostream>

using namespace std;


int main() {

    char A[] = "finding";
    long int H;
    long int x;
    int i;

    H = 0;
    x = 0;

    for(i = 0; A[i] != '\0'; i++) {
        x = 1;
        
        x = x << (A[i] - 97);
        
        if((x & H) > 0) {
            printf("%c is a duplicate", A[i]);
        } else {
            H = x | H;
        }
    }
    return 0;
}
