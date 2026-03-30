/* File: node.h
 * Author: Cindy
 * A node in a doubly-linked list
 */
#ifndef NODE_H
#define NODE_H

#include <iostream>
using std::endl;
using std::cout;

template<class T> class LinkedList; // declaration for friend statment below
template<class T> class Iterator; // declaration for friend statment below

template<class T>
class Node {
public:
   /* Default constructor */
   Node();
   /* 1-arg ctor that creates a node from an item type in the node. */
   Node( const T& );
   
   /* copy constructor */
   Node( const Node<T>& ); 
   
   /* destructor */
   virtual ~Node() {}

   void setItem( const T& ); 

   /* getItem: returns node's item
    * Precondition: class T has overloaded operator= that performs deep copy if T dynamically allocates memory
    */
   T getItem() const { return item; } 

   Node<T>& operator=( const Node<T>& );

   // LinkedList is a friend
   friend class LinkedList<T>;
   friend class Iterator<T>;

private:
   T item;
   Node<T>* nextPtr;
   Node<T>* prevPtr;
};

/* Default constructor sets next and prev pointers to NULL and calls item's default ctor */
template<class T>
Node<T>::Node() : nextPtr( NULL ), prevPtr( NULL ) { 
	item = T();
}

/* 1-arg ctor that creates a node from an item type in the node. Sets next and prev pointers to NULL
   * Precondition: class T has overloaded operator= that performs deep copy if T dynamically allocates memory
   */
template<class T>
Node<T>::Node( const T& i ) : nextPtr( NULL ), prevPtr( NULL ) {
	item = i;
}

/* copy constructor. Creates a node from another node. */
template<class T>
Node<T>::Node(const Node<T>& n) : item(n.item), nextPtr(NULL), prevPtr(NULL) {}

/* setItem: sets values for item in node. 
   * Precondition: class T has overloaded operator= that performs deep copy if T dynamically allocates memory
   */
template<class T>
void Node<T>::setItem( const T& b ) {
   this->item = b;
}

/* operator= assigns one node's data to another. Does not copy next and prev pointers
   * Precondition: class T has overloaded operator= that performs deep copy if T dynamically allocates memory
   */
template<class T>
Node<T>& Node<T>::operator=( const Node<T>& n ) {
	nextPtr = NULL;
	prevPtr = NULL;
	item = n.item;
	return *this;
}

#endif
