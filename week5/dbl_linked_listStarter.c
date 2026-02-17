/* File: dbl_linked_list.cpp
 * Author: Cindy
 * Descrption: contains code for double-linked list operations
 */
#include <stdio.h>
#include <stdlib.h>
#include "node.h"
#include "dbl_linked_list.h"

/* createList: creates empty linked list
 * Parameters: pointer to top of list, passed by reference
 * Returns: nothing
 */
void createList( dbl_linked_list_t* listPtr) {
    //set the headPtr
    listPtr->headPtr = NULL;
    //set the tailPtr
    listPtr->tailPtr = NULL;
    //set the list count value
    listPtr->count = 0;
}

/* insertNode: inserts node at beginning of list
 * Parameters:
 *    listPtr: pointer to list 
 *    nodePtr: pointer to new node
 * Returns: nothing
 */
void insertNode( dbl_linked_list_t* listPtr, node_t* nodePtr ) {
    //first check if the listPtr is NULL
    if(listPtr != NULL ) {
        listPtr->count++;
        //check if the list is currently empty
        if(listPtr->headPtr == NULL) {
            //set the head and tail to point to new node (only node in the list)
            listPtr->headPtr = nodePtr;
            listPtr->tailPtr = nodePtr;
        } else {
            //nodePtr’s nextPtr = the list’s headPtr
            nodePtr->nextPtr = listPtr->headPtr;
            //list’s headPtr->prevPtr = nPtr
            listPtr->headPtr->prevPtr = nodePtr;
            //list’s headPtr = nPtr
            listPtr->headPtr = nodePtr;
        }
    }
}

/* popNode: removes a node from the head of the list 
 *    and returns a pointer to it
 * Parameter listPtr pointer to list 
 * Returns: a pointer to the popped node or NULL if empty list 
 */
node_t* popNode( dbl_linked_list_t* listPtr ) {
    node_t* nodePtr = listPtr->headPtr
}

/* dequeueNode: removes node from end of list and returns it
 * Parameter listPtr pointer to list
 * Returns pointer to dequeued node or NULL if list empty
 */
node_t* dequeueNode( dbl_linked_list_t* listPtr ) {

}

/* deleteList: deletes enire list, setting headPtr = tailPtr = NULL and 
 *    dealloacing memory for every node
 * Parameter pointer to head of list by reference
 * Returns: nothing
 */
void deleteList( dbl_linked_list_t* listPtr ) { 

}

/* traverseStack traverses entire list from head to tail and prints
 * Parameters list pointer
 * Returns: nothing
 */
void traverseStack( const dbl_linked_list_t* listPtr ) {

}

/* traverseQueue traverses entire list from tail to head and prints
 * Parameters list pointer
 * Returns: nothing
 */
void traverseQueue( const dbl_linked_list_t* listPtr ) {

}


//Optional functions to implement, could help with lab
/* findNode: finds a node with the parameter key in it
 * Parameters:
 *    listPtr: pointer to the list
 *    key: item to search for in the list
 * Returns: pointer to the found node, or NULL if not found/invalid
 */
//node_t* findNode( dbl_linked_list* listPtr, int key ) {

//}


/* removeNode: removes a specific node from the list (wherever it is)
 * Parameters:
 *    listPtr: pointer to the list
 *    nodePtr: pointer to the node to remove
 * Returns: pointer to the removed node, or NULL if not found/invalid
 */
//node_t* removeNode( dbl_linked_list_t* listPtr, node_t* nodePtr ) {

//}

