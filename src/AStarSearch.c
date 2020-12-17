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

TreeNode* newTreeNode(int newPuzzleState[][3], int c) {

        // Create a new tree node
        TreeNode* temp = (TreeNode*)malloc(sizeof(TreeNode));

        temp->s = (State*)malloc(sizeof(State));

        // Copy newPuzzleState into puzzleState
        memcpy(temp->s->puzzleState, newPuzzleState, sizeof(int) * 3 * 3);
    
        temp->s->cost = c;

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
    temp->next = NULL;

    return temp;
}

TreeNode* pQPeek(PriorityQueueNode* head) {
    
    return head->node;
}

void pQPop(PriorityQueueNode **head) {
    
    PriorityQueueNode* temp = *head;
    *head = (*head)->next;

    free(temp);
}

void pQPush(PriorityQueueNode** head, TreeNode* n, int p) {
    
    PriorityQueueNode* start = (*head);

    PriorityQueueNode* temp = newPriorityQueueNode(n, p);

    if((*head)->priority > p) {
        
        temp->next = *head;
        (*head) = temp;
    } 
    else {
        while(start->next != NULL && start->next->priority < p) {
            
            start = start->next;

        }

        temp->next = start->next;
        start->next = temp;
    }
}

int pQisEmpty(PriorityQueueNode** head) {

    return (*head) == NULL;
}

ListNode* newListNode(TreeNode* n) {

    ListNode* temp = (ListNode*)malloc(sizeof(ListNode));

    if(temp == NULL) {
    
        fprintf(stderr, "Unable to allocate for new list node.\n");
        exit(-1);
    }
    
    temp->node = n;
    temp->next = NULL;

    return temp;
}

void listInsertTail(ListNode** head, TreeNode* n) {
    
    ListNode* current = *(head);

    ListNode* temp = newListNode(n);

    if(current == NULL) {
        
        current = temp;
    
    }
    else {
    
        while(current->next != NULL) {
            
            current = current->next;
        }

        current->next = temp;
    }
}

void listDeleteHead(ListNode **head) {
    
    ListNode *temp = *head;
    *head = (*head)->next;

    free(temp);
}

int h(int state[][3], int option) {
    
    int goal_state[3][3] = {{1, 2, 3},
                            {8, 0, 4},
                            {7, 6, 5}};
    int h_cost = 0;

    switch(option) {
        case 1: {
                    for(int i = 0; i < 3; i++) {
                        for(int j = 0; j < 3; j++) { 
                            if(state[i][j] != goal_state[i][j]) {
                                h_cost += 1;
                            }
                            printf("%d \n", h_cost);
                        }
                    }

                    return h_cost;
                    break;
                }
        case 2: {
                    for(int i = 0; i < 3; i++) {
                        for(int j = 0; j < 3; j++) {
                            switch(state[i][j]) {
                                case 0: {
                                            h_cost += (abs(i - 1) + abs(j - 1));
                                            break;
                                        }

                                case 1: {
                                            h_cost += (abs(i - 0) + abs(j - 0));
                                            break;
                                        }

                                case 2: {
                                            h_cost += (abs(i - 0) + abs(j - 1));
                                            break;
                                        }
                                            
                                case 3: { 
                                            h_cost += (abs(i - 0) + abs(j - 2));
                                            break;
                                        }

                                case 4: {
                                            h_cost += (abs(i - 1) + abs(j - 2));
                                            break;
                                        }

                                case 5: {
                                            h_cost += (abs(i - 2) + abs(j - 2));
                                            break;
                                        }

                                case 6: {
                                            h_cost += (abs(i - 2) + abs(j - 1));
                                            break;
                                        }

                                case 7: {
                                            h_cost += (abs(i - 2) + abs(j - 0));
                                            break;
                                            }

                                case 8: {
                                            h_cost += (abs(i - 1) + abs(j - 0));
                                            break;
                                        }
                            }
                        }
                    }
                return h_cost;
                }
    }
}
