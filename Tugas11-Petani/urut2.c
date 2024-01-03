#include <stdio.h>
#define MAX 5

void TampilkanArray(int A[], int n) {
    for (int j = 0; j < n; j++) {
        printf("A[%d] = %d\n", j, A[j]);
    }
}

int main() {
    int A[MAX] = {40, 4, 30, 8, 7};
    int X, j, k, maks, imaks, temp;

    printf("Sebelum pengurutan: \n");
    TampilkanArray(A, MAX);

    X = MAX;

    for (j = 0; j < MAX - 1; j++) {
        maks = A[0];
        imaks = 0;

        for (k = 1; k < X; k++) {
            if (A[k] > maks) {
                maks = A[k];
                imaks = k;
            }
        }

        temp = A[X - 1];
        A[X - 1] = A[imaks];
        A[imaks] = temp;

        X--;
    }

    printf("\n");
    printf("Setelah pengurutan: \n");
    TampilkanArray(A, MAX);

    return 0;
}