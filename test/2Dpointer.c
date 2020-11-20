#include <stdio.h>


int main () {

    int arr[3][3] = {{1, 2, 3},
                    {4, 0, 6},
                    {7, 8, 9}};

    for(int (*p)[3] = arr; p != arr + 3; p++) {
        for(int *q = *p; q != *p + 3; q++) {
        
            printf("%d ", *q);
    
        }
        printf("\n");
    }
    return 0;
}
