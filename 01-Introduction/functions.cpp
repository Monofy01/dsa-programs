#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int add(int a, int b) {
    int c;
    c = a + b;
    return c;
}

int main() {
    int num1 = 10;
    int num2 = 15;
    int sum;

    sum = add(num1, num2);

    cout<<"Sum is "<<sum;

    return 0;

}
