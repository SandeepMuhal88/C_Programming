#include <stdio.h>
int main()
{
    int n, temp;
    printf("Enter the size of array:- ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array:-");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j, n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("After the shorting:-\n");
    for (int i = 0; i < n; i++)
        printf("%d", arr[i]);
    return 0;
}