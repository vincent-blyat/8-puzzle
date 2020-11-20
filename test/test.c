/**
 *  @file: test.c
 *  @brief: This is a test file
 *
 *
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../src/AStarSearch.h"

int main() {
    
    int arr[3][3] = {{1, 2, 3},
                    {4, 5, 6},
                    {7, 8, 9}};

    TreeNode* t = newTreeNode(arr);

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", t->s->puzzleState[i][j]);
        }
        printf("\n");
    }
    return 0;
}
