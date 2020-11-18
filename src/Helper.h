/**
 * ++++++++++++++++++++++++++++++++++++++++++++++++++
 *  Helper.h
 *  Al Vincent Musa BSCS3B Artificial Intelligence
 *  Header file for Helper.c
 *  +++++++++++++++++++++++++++++++++++++++++++++++++
 */

#ifndef HELPER_H

#include <stdio.h>


struct State {

        int puzzleState[3][3];

        int cost;
};

typedef struct treeNode {
        
        struct State* state;
        
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
