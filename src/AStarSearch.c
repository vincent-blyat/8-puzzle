/*!
 *  @file AStarSearch.c
 *  @brief C source file for AStarSearch.h
 *
 *  @author Al Vincent Musa
 */

/*!
 *  @page TODO_LIST TODO list
 *  @todo Implement the operations
 *  @todo Implement the priority queue
 *  @todo Implement the list
 *  @todo Implement the tree
 *  @todo Test the functions.
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "AStarSearch.h"


//////////
// TREE //
//////////

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

void moveUP(int puzzleState[][3]) {

    int i = 0, j = 0;

    while(puzzleState[i][j] != 0) {
        i++;
        j++;
    }

    swap(&puzzleState[i][j], &puzzleState[i - 1][j]);
 
}

void moveDOWN(int puzzleState[][3]) {
    
    int i = 0, j = 0;

    while(puzzleState[i][j] != 0) {
        i++;
        j++;
    }

    swap(&puzzleState[i][j], &puzzleState[i + 1][j]);
 
}

void moveRIGHT(int puzzleState[][3]) {
    
    int i = 0, j = 0;

    while(puzzleState[i][j] != 0) {
        i++;
        j++;
    }

    swap(&puzzleState[i][j], &puzzleState[i][j + 1]);
 
}

void moveLEFT(int puzzleState[][3]) {
 
    int i = 0, j = 0;

    while(puzzleState[i][j] != 0) {
        i++;
        j++;
    }

    swap(&puzzleState[i][j], &puzzleState[i][j -1]);
 
}

void swap(int* a, int* b) {

    int temp = *a;
    *a = *b;
    *b = temp;
}

