#include <iostream>

using namespace std;

struct Rectangle {
    int length;
    int breadth;
};


int main() {
    
    /*
    int a = 10;
    int *p;

    p = &a;

    cout << a;
    */
    /*
    int A[5] = {2,4,6,8,10};
    int *p;
    p = A;

    for(int i =0; i < 5; i++) {
        cout<<p[i]<<endl;
    }
    */

    /*
    int *p;
    //p = (int *) malloc(5 * sizeof(int)); //c code
    p = new int[5]; //c++ 

    for(int i = 0; i < 5; i++) {
        cout<<p[i]<<endl;
    }

    delete [] p; //c++
    free(p); //c
    */
    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *p5;

    cout<<sizeof(p1)<<endl;
    cout<<sizeof(p2)<<endl;
    cout<<sizeof(p3)<<endl;
    cout<<sizeof(p4)<<endl;
    cout<<sizeof(p5)<<endl;


    return 0;
}
