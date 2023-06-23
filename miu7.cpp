#include <stdio.h>

int unionFinder(int arr1[], int arr2[]) {
    // Calculate the lengths of arr1 and arr2
    int arrlen1 = sizeof(arr1) / sizeof(arr1[0]);
    int arrlen2 = sizeof(arr2) / sizeof(arr2[0]);

    printf("Length 1: %d\n", arrlen1);
    printf("Length 2: %d\n", arrlen2);

    int i, j;

    for (i = 0; i < arrlen1; i++) {
        for (j = 0; j < arrlen2; j++) {
            if (arr1[i] == arr2[j]) {
                printf("Matching element: %d\n", arr2[j]);
            } else {
                printf("No matching element\n");
            }
        }
    }

    return 0;
}

int main() {
    int arr1[] = {1, 8, 3, 2, 6};
    int arr2[] = {2, 6, 1};

    unionFinder(arr1, arr2);

    return 0;
}
