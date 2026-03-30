/* File: iterator.h
 * Author: Cindy
 * Description: utility class for a linked list
 */
#ifndef ITERATOR_H
#define ITERATOR_H
#include "node.h"

template<class T> class LinkedList;

template<class T>
class Iterator {
public:
	Node<T>& operator*() const;

	bool operator==( const Iterator<T>& p ) const;
	bool operator!=( const Iterator<T>& p ) const;
	
	Iterator& operator++();
	Iterator& operator--();

	friend class LinkedList<T>;

private:
	Node<T>* curPtr;
	/* Iterator constructor that creates an iterator that points to Node parameter */
	Iterator( Node<T>* nPtr ); // no default ctor, just private copy
};

/* operator* dereferences iterator to return a reference to node in list */
template<class T>
Node<T>& Iterator<T>::operator*() const {
	return *curPtr;
}

/* operator== returns true if this iterator and parameter iterator point to same object */
template<class T>
bool Iterator<T>::operator==( const Iterator& it ) const {
	return curPtr == it.curPtr;
}

/* operator!= returns true if this iterator and parameter iterator don't point to same object */
template<class T>
bool Iterator<T>::operator!=( const Iterator& it ) const {
	return curPtr != it.curPtr;
}

/* operator++ moves iterator to point to next node in list and returns same iterator */
template<class T>
Iterator<T>& Iterator<T>::operator++() {
	curPtr = curPtr->nextPtr;
	return *this;
}

/* operator-- moves iterator to point to previous node in list and returns same iterator */
template<class T>
Iterator<T>& Iterator<T>::operator--() {
	curPtr = curPtr->prevPtr;
	return *this;
}

/* Iterator constructor that creates an iterator that points to Node parameter */
template<class T>
Iterator<T>::Iterator( Node<T>* ptr ) {
	curPtr = ptr;
}

#endif