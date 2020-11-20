/*!
 * +++++++++++++++++++++++++++++++++++++++++++++++++
 *  @file AStarSearch.c
 *  @brief C source file for AStarSearch.h
 *
 *  @author Al Vincent Musa
 *  ++++++++++++++++++++++++++++++++++++++++++++++++
 */

/*!
 *  @todo
 *  - Implement the operations
 *      + moveUP
 *      + moveDOWN
 *      + moveRIGHT
 *      + moveLEFT
 *  - Implement the priority queue
 *  - Implement the list
 *  - Implement the tree
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "AStarSearch.h"


//////////
// TREE //
//////////

/*!
 *  @fn newTreeNode
 *  Create a new node for the tree.
 *
 *  @param newPuzzleState
 *  [int] takes a 2D array as a parameter.
 * 
 *  @return
 *  return a new node
 */
TreeNode* newTreeNode(int newPuzzleState[][3]) {

        // Create a new tree node
        TreeNode* temp = (TreeNode*)malloc(sizeof(TreeNode));

        temp->s = (State*)malloc(sizeof(State));

        // Copy newPuzzleState into puzzleState
        memcpy(temp->s->puzzleState, newPuzzleState, sizeof(int) * 3 * 3);

        // Set children to NULL
        temp->children[0] = NULL;

        return temp;
}

////////////////
// OPERATIONS //
////////////////

/*!
 *  @fn moveUP
 *  moves the tile UP
 *
 *  @param puzzleState
 *  [int[ takes a 2D Array as a parameter.
 */
void moveUP(int puzzleState[][3]) {

    
}

/*!
 *  @fn moveDOWN
 *  moves the tile DOWN
 *
 *  @param puzzleState
 *  [int[ takes a 2D Array as a parameter.
 */
void moveDOWN(int puzzleState[][3]) {


}

/*!
 *  @fn moveRIGHT
 *  moves the tile RIGHT 
 *
 *  @param puzzleState
 *  [int[ takes a 2D Array as a parameter.
 */
void moveRIGHT(int puzzleState[][3]) {


}

/*!
 *  @fn moveLEFT
 *  moves the tile LEFT 
 *
 *  @param puzzleState
 *  [int[ takes a 2D Array as a parameter.
 */
void moveLEFT([][3]) {


}

///////////
// QUEUE //
///////////

/**
 *
// Node struct for PRIORITY QUEUE
typedef struct queueNode {
 
        // data

        
        // prority status
        int priority;
        
        struct node* next
} QueueNode;


// create a new Node
QueueNode* newQueueNode(int d, int p) {

        QueueNode* temp = (QueueNode*)malloc(sizeof(QueueNode));
        temp->puzzle = d;
        temp->priority = p;
        temp->next = NULL;

        return temp;
}

// Returns the value of the head
int qPeek(QueueNode** head) {
        
        return (head)->puzzle;
}

// Pops the head of the node
void qPop(QueueNode** head) {
        
        QueueNode* temp = *head;
        (*head) = (*head)->next;
        free(temp);
}

// Push a node into the priority queue
void qPush(QueueNode** head, int d, int p) {
        
        QueueNode* start = (*head);

        QueueNode* temp = newQueueNode(d,p);
        
        if((*head)->priority > p) {
                temp->next = *head;
                (*head) = temp;
        }
        else {
                while (start->next != NULL && start->next->priority < p) {
                        start = start->next;
                }

                temp->next = start->next;
                start->next = temp;
        }
}

// Check if the queue is empty
int isQueueEmpty(QueueNode** head) {
        return (*head == NULL)
}

//////////
// LIST //
//////////

// Node struct for the list
typedef struct listNode {
        
        struct listNode* next;
} ListNode;
*/
