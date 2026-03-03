#include <stdio.h>
int main()
{
    int arr[10][10], i, j, n;
    int is_lower = 1;
    printf("enter the order of the matrix");
    scanf("%d", &n);
    printf("enter elements of the matrix");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i<j && arr[i][j] != 0)
            {
                is_lower = 0 ;
                 break;
            }
        }
    }
    if (is_lower == 1)
    {
        printf("the matrix is a lower triangular matrix");
    }
    else
    {
        printf("the matrix is not a lower triangular matrix");
    }
    return 0;
}