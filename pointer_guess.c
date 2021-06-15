#include <iostream>
using namespace std;

const int size = 5;

void Print(int *ptr) {
    cout<< ptr[0];
}

void Print(int ptr[size]) {
    cout<<ptr[0];
}

int main() {
    int a[size] = {1,2,3,4,5};
    int *b = new int(size);
    Print(a);
    Print(b);
    return 0;
}

//Priously defined function
