#include <iostream>
#include <string>
#include "box.h"

using namespace std;

int main() {
    Box<int> b1(100);
    Box<string> b2("Hello feesh");

    b1.print();
    b2.print();
    
    return 0;
}