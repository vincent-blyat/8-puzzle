/*******************************
 *  @headerfile  AStarSearch.h "AStarSearch.h"
 *  @brief A header file for AStarSearch.c
 *  @author {Al Vincent Musa, Vincent Lomibao}
 *******************************/


#ifndef HELPER_H

#include <stdio.h>
#include <stdlib.h>

/*!
 *  @typedef State
 *  Alias for state
 *
 *  @struct state
 *  struct definition for State
 *
 *  @var puzzleState
 *  2D array representing a 3x3 puzzle
 *
 *  @var cost
 *  The cost of the state
 */
typedef struct state {

        int puzzleState[3][3];

        int cost;
} State;

/*!
 *  @typedef TreeNode
 *  Alias for treeNode
 *
 *  @struct treeNode
 *  struct definition for treeNode
 *  
 *  @var s
 *  The state of the puzzle
 *
 *  @var children
 *  Array containing the pointers to node's children
 */
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

extern void moveUP(int puzzleState[][3]);

extern void moveDOWN(int puzzleState[][3]);

extern void moveRIGHT(int puzzleState[][3]);

extern void moveLEFT(int puzzleState[][3]);

/**
 *
extern QueueNode* newQueueNode(int d,int p);

extern int qPeek(QueueNode** head);

extern void qPop(QueueNode** head);

extern void qPush(QueueNode** head, int d, int p);

extern int isQueueEmpty(QueueNode** head);
**/
