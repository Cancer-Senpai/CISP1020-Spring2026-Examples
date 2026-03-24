#ifndef BOX_H
#define BOX_H

using namespace std;

template <class T>
class Box {
private:
    T value;
public:
    Box(); //default constructor
    //1-arg constructor that takes the value of what
    //the box should store
    Box(const T& v);
    //display the value in the Box
    void print();
};

template <class T>
Box<T>::Box() {
    value = T();
}

//1-arg constructor
template <class T>
Box<T>::Box(const T& v) {
    value = v;
}

//show function
template <class T>
void Box<T>::print() {
    cout << "Value: [" << value << "]" << endl;
}

#endif