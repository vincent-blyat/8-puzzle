#include "../src/AStarSearch.h"

#include <stdio.h>

int main() {

    int arr[3][3] = {{1, 2, 3},
                    {4, 0, 5},
                    {6, 7, 8}};

    TreeNode* start = newTreeNode(arr);

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", start->s->puzzleState[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    moveUP(arr);

    start->children[0] = newTreeNode(arr);

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", start->children[0]->s->puzzleState[i][j]);
        }
        printf("\n");
    }


    return 0;
}
