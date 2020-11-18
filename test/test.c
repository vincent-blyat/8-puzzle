#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../src/Helper.h"

int main() {
    
    int arr[3][3] = {{1, 2, 3},
                    {4, 5, 6},
                    {7, 8, 9}};

    TreeNode* tree = newTreeNode(arr);

    return 0;
}
