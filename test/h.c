#include <stdio.h>

#include "../src/AStarSearch.h"

void test(int actual, int expected, const char *test_name) {
    if(expected == actual) {
        printf("%s PASSED. \n", test_name);
    }
    else {
        printf("%s FAILED: expected %d but instead returned %d. \n", test_name, expected, actual);
    }
}

int main(void) {

    int arr1[3][3] = {{1, 2, 3}, {8, 0, 4}, {7, 6, 5}};
    test(h(arr1, 2), 0, "Test 1");

    return 0;
}
