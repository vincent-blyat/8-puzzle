/*!
 *  @file AStarSearch.c
 *  @brief C source file for AStarSearch.h
 *
 *  @author Al Vincent Musa
 */

/*!
 *  @page TODO_LIST TODO list
 *  @todo Implement the priority queue
 *  @todo Implement the list
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

PriorityQueueNode* newPriorityQueueNode(TreeNode* n, int p) {
    
    PriorityQueueNode* temp = (PriorityQueueNode*)malloc(sizeof(PriorityQueueNode));
    temp->node = n;
    temp->priority = p;

    return temp;
}

TreeNode* pQPeek(PriorityQueueNode* head) {
    
    return (*head)->n;
}

void pQPop(PriorityQueueNode* head) {
    
    PriorityQueueNode* head = temp;
    (*head) = (*head)->next;

    free(temp);
}

void pQPush(PriorityQueueNode** head, TreeNode* n, int p) {
    
    PriorityQueueNode* start = *(head);

    PriorityQueueNode* temp = newPriorityQueueNode(n, p);

    if(*(head)->priority > p) {
        
        temp->next = *head;
        *(head) = temp;
    } 
    else {
        while(start->next != NULL start->next->priority < p) {
            
            start = start->next;

        }

        temp->next = start->next;
        start->next = temp;
    }
}

int pQisEmpty(PriorityQueueNode** head) {

    return (*head) == NULL;
}
