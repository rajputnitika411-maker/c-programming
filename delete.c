#include <stdio.h>
void delete(int arr[], int pos, int n);
 int main()
{
    int arr[100], i, n, pos;
    printf("enter the array element size:\n");
    scanf("%d", &n);
    printf("enter the array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter the position of the element to delete:\n");
    scanf("%d", &pos);
    delete(arr, pos, n);
    return 0;
}
void delete(int arr[], int pos, int n)
{
    int i;
    if (pos >= n)
      printf("not deleted");
    else
        for (i = pos; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
    printf("array after deletion:\n");
    for (i = 0; i < n - 1; i++)
    {
        printf("%d ", arr[i]);
    }

return 0;
}
