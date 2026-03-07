#include <stdio.h>
int main()
{
    int n, i, arr[100], pos, x;
    printf("enter the no of elements");
    scanf("%d", &n);

    printf("enter the elements");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("enter the position to insert:");
    scanf("%d", &pos);
    printf("enter the element to insert:");
    scanf("%d", &x);
    for (i = n - 1; i >= pos - 1; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos - 1] = x;
    n++;
    printf("array after insertion:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

