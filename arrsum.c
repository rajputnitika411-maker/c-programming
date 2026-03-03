#include <stdio.h>

int main() {
    int i, j;
    int A[2][2], B[2][2], C[2][2];

    printf("Enter the elements of matrix A\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter the elements of matrix B\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    printf("Sum of matrix A and B\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            C[i][j] = A[i][j] + B[i][j];
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}