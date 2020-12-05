#include <stdio.h>

#include "../src/AStarSearch.h"

int main(void) {
    
    int arr[3][3] = {0};

    TreeNode *node = newTreeNode(arr, 0);
    ListNode *list = newListNode(node);

    listInsertTail(&list, node);
    listInsertTail(&list, node);
    listInsertTail(&list, node);
    listInsertTail(&list, node);
    listInsertTail(&list, node);

    while(list !=NULL) {
        printf("Cost: %d \n", list->node->s->cost);
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                printf("%d ", list->node->s->puzzleState[i][j]);
            }
            printf("\n");
        }

        list = list->next;
    }
    return 0;
}
