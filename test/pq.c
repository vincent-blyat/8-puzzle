#include <stdio.h>

#include "../src/AStarSearch.h"

int main(void) {

    int arr[3][3] = {{1, 2, 3},
                    {4, 0, 5},
                    {6, 7, 8}};

    TreeNode* tree_node = newTreeNode(arr, 0);

    printf("Cost: %d \n", tree_node->s->cost);
    for(int i = 0; i < 3; i++) {
    
        for(int j = 0; j < 3; j++) {
        
            printf("%d ", tree_node->s->puzzleState[i][j]);
        }

        printf("\n");
    }
    printf("\n\n");

    PriorityQueueNode* pqueue = newPriorityQueueNode(tree_node,  2);
    pQPush(&pqueue, tree_node, 1);
    pQPush(&pqueue, tree_node, 3);
    pQPush(&pqueue, tree_node, 5);
    pQPush(&pqueue, tree_node, 4);

    PriorityQueueNode *q = pqueue;
    while(q != NULL) {
    
        printf("Priority: %d\n", q->priority);
        printf("Cost: %d \n", q->node->s->cost);
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
            printf("%d ", q->node->s->puzzleState[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        q = q->next;
    }
    pQPop(&pqueue);
    printf("Priority: %d ", pqueue->priority);
 
    return 0;
}
