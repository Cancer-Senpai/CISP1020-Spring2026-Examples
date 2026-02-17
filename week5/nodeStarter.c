/* File: node.cpp
 * Author: Cindy
 * Description: a node with integer data for a doubly linked list
 *    data stucture. 
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include "node.h"

/* initNode: allocates memory for node, initializes node data and nextPtr
 * Parameters:
 *    data to put in node 
 * Returns: pointer to new node 
 */
node_t* initNode( int data ) {
    node_t* nodePtr = (node_t*)malloc(sizeof(node_t));
    nodePtr->i = data;
    nodePtr->nextPtr = NULL;
    nodePtr->prevPtr = NULL;
    return nodePtr;
}