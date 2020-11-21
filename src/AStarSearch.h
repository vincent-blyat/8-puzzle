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
 */
typedef struct state {

        int puzzleState[3][3]; ///< 2D array representing a 3x3 puzzle grid.

        int cost; ///< the cost of state
} State;

/*!
 *  @typedef TreeNode
 *  Alias for treeNode
 *
 *  @struct treeNode
 *  struct definition for treeNode
 */
typedef struct treeNode {
        
        State* s; ///< the puzzle state
        
        struct treeNode* children[4]; ///< array of children pointers.

} TreeNode;

extern struct queueNode QueueNode;

#endif

/////////////////////////
// Function Prototypes //
/////////////////////////

/**
 *  @fn TreeNode* newTreeNode(int puzzleState[][3])A
 *  @brief Create a new node for the tree.
 *  @param puzzleState 2D for the new node.
 *  @return A new node.
 */
extern TreeNode* newTreeNode(int newpuzzleState[][3]);

/**
 *  @fn void moveUP(int puzzleState[][3])
 *  @brief Moves a tile upwards.
 *  @param puzzleState 2D array to be manipulated.
 */
extern void moveUP(int puzzleState[][3]);

/**
 *  @fn void moveDOWN(int puzzleState[][3])
 *  @brief Moves a tile downwards.
 *  @param puzzleState 2D array to be manipulated.
 */
extern void moveDOWN(int puzzleState[][3]);

/**
 *  @fn void moveRIGHT(int puzzleState[][3])
 *  @brief Moves a tile rightwards.
 *  @param puzzleState 2D array to be manipulated.
 */
extern void moveRIGHT(int puzzleState[][3]);

/**
 *  @fn void moveLEFT(int puzzleState[][3])
 *  @brief Moves a tile leftwards.
 *  @param puzzleState 2D array to be manipulated.
 */
extern void moveLEFT(int puzzleState[][3]);

/**
 *  @fn void swap(int* a, int* b)
 *  @brief Takes two pointers and swap its values
 *  @param a Pointer to an integer.
 *  @param b Pointer to an interger.
 */
extern void swap(int* a, int* b)
/**
 *
extern QueueNode* newQueueNode(int d,int p);

extern int qPeek(QueueNode** head);

extern void qPop(QueueNode** head);

extern void qPush(QueueNode** head, int d, int p);

extern int isQueueEmpty(QueueNode** head);
**/
