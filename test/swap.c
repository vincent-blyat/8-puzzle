#include <stdio.h>

#include "../src/AStarSearch.h"

int main() {

    int a = 543;
    int b = 3432;

    printf("%d %d \n", a, b);

    swap(&a, &b);

    printf("%d %d", a, b);

    return 0;
}
