#include <stdio.h>

int main() {
    int A[10][3], B[10][3], C[20][3];
    int i, j, k = 1;

    int m, n, t1, t2;

    printf("Enter rows, columns and non-zero elements of Matrix A: ");
    scanf("%d %d %d", &m, &n, &t1);

    A[0][0] = m;
    A[0][1] = n;
    A[0][2] = t1;

    printf("Enter row column value for A:\n");
    for(i = 1; i <= t1; i++)
        scanf("%d %d %d", &A[i][0], &A[i][1], &A[i][2]);

    printf("Enter rows, columns and non-zero elements of Matrix B: ");
    scanf("%d %d %d", &m, &n, &t2);

    B[0][0] = m;
    B[0][1] = n;
    B[0][2] = t2;

    printf("Enter row column value for B:\n");
    for(i = 1; i <= t2; i++)
        scanf("%d %d %d", &B[i][0], &B[i][1], &B[i][2]);

    i = j = 1;

    while(i <= t1 && j <= t2) {

        if(A[i][0] == B[j][0] && A[i][1] == B[j][1]) {
            C[k][0] = A[i][0];
            C[k][1] = A[i][1];
            C[k][2] = A[i][2] - B[j][2];
            i++; j++; k++;
        }

        else if(A[i][0] < B[j][0] || 
               (A[i][0] == B[j][0] && A[i][1] < B[j][1])) {
            C[k][0] = A[i][0];
            C[k][1] = A[i][1];
            C[k][2] = A[i][2];
            i++; k++;
        }

        else {
            C[k][0] = B[j][0];
            C[k][1] = B[j][1];
            C[k][2] = -B[j][2];
            j++; k++;
        }
    }

    while(i <= t1) {
        C[k][0] = A[i][0];
        C[k][1] = A[i][1];
        C[k][2] = A[i][2];
        i++; k++;
    }

    while(j <= t2) {
        C[k][0] = B[j][0];
        C[k][1] = B[j][1];
        C[k][2] = -B[j][2];
        j++; k++;
    }

    C[0][0] = A[0][0];
    C[0][1] = A[0][1];
    C[0][2] = k - 1;

    printf("\nResultant Sparse Matrix (A - B):\n");
    for(i = 0; i < k; i++)
        printf("%d %d %d\n", C[i][0], C[i][1], C[i][2]);

    return 0;
}