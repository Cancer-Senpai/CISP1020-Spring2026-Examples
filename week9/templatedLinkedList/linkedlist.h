/* File: linkedList.h
 * Author: Cindy
 * Description: implements a template for a doubly linked list that has beginning and ending (empty) sentinal nodes.
 *    This class allocates memory so it has a copy constructor, an overloaded operator= and a destructor.
 */
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <cstdlib>
#include "node.h"
#include "iterator.h"

template<typename T>
class LinkedList {
public:
   /* Default ctor */
   LinkedList();

   /* Copy constructor does deep copy of parameter list */
   LinkedList( const LinkedList<T>& );

   /* size returns the size of the list */
   int size() const { return n; }

   /* empty returns true if the list is empty */
   bool empty() const { return n == 0; }

   /* begin returns an iterator to the first element in the list or the head sentinel node if the list is empty */
   Iterator<T> begin() const { return Iterator<T>( headPtr->nextPtr ); }

   /* end returns an iterator to one past the last element (the tail sentinel node)
      Precondition: do not dereference this iterator */
   Iterator<T> end() const { return Iterator<T>( tailPtr ); }

   void insert( const Iterator<T>&, const Node<T>& );
   void insertFront( const Node<T>& );
   void insertBack( const Node<T>& );

   void erase( const Iterator<T>& );
   void eraseFront() { erase( begin() ); }
   /* eraseBack removes node from end of list if list is not empty
    */
   void eraseBack() { erase( --end()); }

   void traverseAndPrint() const;

   /* LinkedList destructor deallocates all nodes including head and tail sentinels */
   virtual ~LinkedList() { eraseList(); }
   
   LinkedList<T>& operator=( const LinkedList<T>& );
private:
   void eraseList();   
   Node<T>* headPtr;
   Node<T>* tailPtr;
   int n; // num nodes in list (not counting sentinel head and tail)
};

/* Default ctor creates an empty list with empty head and tail nodes */
template<class T>
LinkedList<T>::LinkedList() {
	headPtr = new Node<T>();
	tailPtr = new Node<T>();
	headPtr->nextPtr = tailPtr;
	tailPtr->prevPtr = headPtr;
	n = 0;
}

/* Copy constructor does deep copy of parameter list */
template<class T>
LinkedList<T>::LinkedList( const LinkedList<T>& l ) {
   n = l.n;
   // thisPtr goes through this' list, curPtr goes thru l's
   Node<T>* thisPtr, *curPtr = l.headPtr; 
   headPtr = new Node<T>( *(l.headPtr) );
   tailPtr = new Node<T>( *(l.tailPtr ) );
   thisPtr = headPtr;
   curPtr = curPtr->nextPtr;
   while ( curPtr != l.tailPtr ) { // while not at the end of list l
      thisPtr->nextPtr = new Node<T>( *curPtr );
	  Node<T>* tempPrevPtr = thisPtr;
      thisPtr = thisPtr->nextPtr;
	  thisPtr->prevPtr = tempPrevPtr;
      curPtr = curPtr->nextPtr;
	}
	thisPtr->nextPtr = tailPtr;
	tailPtr->prevPtr = thisPtr;
}

/* insert inserts parameter node just before iterator parameter position
   * Pre-condition: node type T has copy constructor */
template<class T>
void LinkedList<T>::insert( const Iterator<T>& it, const Node<T>& node ) {
	Node<T>* next = it.curPtr; // node after new node
	Node<T>* prev = it.curPtr->prevPtr; // node before new node
	Node<T>* newNode = new Node<T>(node);
	newNode->nextPtr = next;
	newNode->prevPtr = prev;
	prev->nextPtr = newNode;
	next->prevPtr = newNode;
	n++;
}

/* insertFront inserts node at beginning of list
   * Pre-condition: node type T has copy constructor */
template<class T>
void LinkedList<T>::insertFront(const Node<T>& n ) {
	insert( begin(), n );
}

/* insertBack inserts parameter node at the end of the list
   * Pre-condition: node type T has copy constructor */
template<class T>
void LinkedList<T>::insertBack( const Node<T>& n ) {
	insert( end(), n );
}

/* erase removes node from list referred to by iterator parameter */
template<class T>
void LinkedList<T>::erase( const Iterator<T>& it ) {
	Node<T>* current = it.curPtr;
	Node<T>* next = it.curPtr->nextPtr;
	Node<T>* prev = it.curPtr->prevPtr;
	prev->nextPtr = next;
	next->prevPtr = prev;
	delete current;
	n--;
}

/* eraseList deallocates all nodes including head and tail sentinels.
     Used by destructor, operator= and copy ctor */
template<class T>
void LinkedList<T>::eraseList() {
   while( !empty() ) {
      eraseFront();
   }
}

/* operator= erases current list then deep copies list parameter to this list
   * Pre-condition: class T has overloaded copy constructor
   * Returns reference to this list */
template<typename T>
LinkedList<T>& LinkedList<T>::operator=( const LinkedList<T>& l ) {
   // thisPtr goes through this' list, curPtr goes thru l's
   Node<T>* thisPtr, *nodePtr;

   // first, delete original list so no memory  leak
   eraseList();
   
   // get head of new list then copy l to this
   headPtr = new Node<T>;
   thisPtr = headPtr;
   Iterator<T> it = l.begin();
   while( it != l.end() ) {
	   nodePtr = new Node<T>( *(it.curPtr) );
	   nodePtr->prevPtr = thisPtr;
	   thisPtr->nextPtr = nodePtr;
	   thisPtr = nodePtr;
	   ++it;
   }
   // finally, get tail node of new list
   tailPtr = new Node<T>();
   tailPtr->prevPtr = thisPtr;
   thisPtr->nextPtr = tailPtr; 
   n = l.n;		// set this lists' size
   return *this;
}

/* traverseAndPrint traverses entire list and prints node items to display.
   * Precondidtion: class T has overloaded <<
*/
template<typename T>
void LinkedList<T>::traverseAndPrint() const {
	Iterator<T> it(begin() );
	for( ; it != end(); ++it ) {
		cout << it.curPtr->item << endl;
	}
}
#endif