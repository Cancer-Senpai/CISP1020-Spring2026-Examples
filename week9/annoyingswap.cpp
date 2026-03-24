#include <iostream>

using namespace std;

void swap(int& i, int& j) {
    int t = i;
    i = j;
    j = t;
}
void swap(double& i, double& j) {
    double t = i;
    i = j;
    j = t;
}

void swap(Typeofvar& i,Typeofvar& j) {
    Typeofvar t = i;
    i = j;
    j = t;
}

int main() {
    int a = 5;
    int b = 42;
    double x = 3.14;
    double y = 10.5;

    cout << "Before swap:" << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    swap(a,b);
    cout << "After swap:" << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    cout << "Before swap:" << endl;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    swap(x,y);
    cout << "After swap:" << endl;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;

    return 0;
}