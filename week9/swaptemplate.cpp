#include <iostream>

using namespace std;

template <class T>
void my_swap(T& i,T& j) {
    T temp = i;
    i = j;
    j = temp;
}

int main() {
    int a = 5;
    int b = 42;
    double x = 3.14;
    double y = 10.5;
    string s = "Hello";
    string g = "Goodbye";

    cout << "Before swap:" << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    my_swap(a,b);
    cout << "After swap:" << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    cout << "Before swap:" << endl;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    my_swap(x,y);
    cout << "After swap:" << endl;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;

    cout << "Before swap:" << endl;
    cout << "s: " << s << endl;
    cout << "g: " << g << endl;
    my_swap(s,g);
    cout << "After swap:" << endl;
    cout << "s: " << s << endl;
    cout << "g: " << g << endl;

    return 0;
}