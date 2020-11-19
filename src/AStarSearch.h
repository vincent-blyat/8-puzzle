/**
 * ++++++++++++++++++++++++++++++++++++++++++++++++++
 *  AStarSearch.h
 *  Al Vincent Musa BSCS3B Artificial Intelligence
 *  Header file for Helper.c
 *  +++++++++++++++++++++++++++++++++++++++++++++++++
 */

#ifndef HELPER_H

#include <stdio.h>
#include <stdlib.h>

typedef struct state {

        int puzzleState[3][3];

        int cost;
} State;

typedef struct treeNode {
        
        State* s;
        
        struct treeNode* children[4];

} TreeNode;

extern struct queueNode QueueNode;

#endif

/////////////////////////
// Function Prototypes //
/////////////////////////

extern TreeNode* newTreeNode(int puzzleState[][3]);
/**
 *
extern QueueNode* newQueueNode(int d,int p);

extern int qPeek(QueueNode** head);

extern void qPop(QueueNode** head);

extern void qPush(QueueNode** head, int d, int p);

extern int isQueueEmpty(QueueNode** head);
**/
