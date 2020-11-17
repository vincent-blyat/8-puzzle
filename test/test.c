#include <stdio.h>
#include <stdlib.h>

#include "../src/Helper.h"

int main() {
    
    struct State s = {.puzzleState[1][1] = 6};

    printf("%d", s.puzzleState[1][1]);

    return 0;
}
