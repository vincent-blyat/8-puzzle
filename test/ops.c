#include <stdio.h>

#include "../src/AStarSearch.h"

int main() {
    
    int arr[3][3] = {{1, 2, 3},
                    {4, 0, 5},
                    {6, 7, 8}};

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
  
    moveUP(arr);
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
