/**
 * +++++++++++++++++++++++++++++++++++++++++++++++++
 *  Helper.c 
 *  Al Vincent Musa BSCS3B Artificial Intelligence
 *
 *  Utility and data structures for the program.
 *  ++++++++++++++++++++++++++++++++++++++++++++++++
 */

/**
 *  ++++++++++++++++++++++++++++++++++++++++++++++++
 *  TODO:
 *  - Configure the queue for the states.
 *  - Fix the state
 *  - Fix the queue
 *  - Implement the list
 *  - Implement the tree
 *  ++++++++++++++++++++++++++++++++++++++++++++++++
 */


#include <stdio.h>
#include <stdlib.h>

#include "Helper.h"

/** Struct for the states
typedef struct state {

        // 3x3 puzzle grid
        int puzzleState[3][3];

} State;
*/
///////////
// QUEUE //
///////////

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
