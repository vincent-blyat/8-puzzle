#include <stdio.h>
#include <stdlib.h>

void test1(int arr[][3]) {

    int temp = arr[0][1];
    arr[0][1] = arr[1][1];
    arr[1][1] = temp;
}

void test2(int* arr) {
    int a = *arr + 1;
    int b = *arr + 4;

    int temp = a;
    a = b;
    b = temp;
}

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

    test2(&arr[0][0]);
    printf("\n");

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
