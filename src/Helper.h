/**
 * ++++++++++++++++++++++++++++++++++++++++++++++++++
 *  Helper.h
 *  Al Vincent Musa BSCS3B Artificial Intelligence
 *  Header file for Helper.c
 *  +++++++++++++++++++++++++++++++++++++++++++++++++
 */

#ifndef HELPER_H

#include <stdio.h>


typedef struct state{
        
        int puzzleState[3][3];
} State;

extern struct queueNode QueueNode;

#endif

/////////////////////////
// Function Prototypes //
/////////////////////////

/**
 *
extern QueueNode* newQueueNode(int d,int p);

extern int qPeek(QueueNode** head);

extern void qPop(QueueNode** head);

extern void qPush(QueueNode** head, int d, int p);

extern int isQueueEmpty(QueueNode** head);
**/
