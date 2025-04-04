#include <stdio.h>
void linearsearch(int arr[],int n,int search){
     int k=0;
     for (int i = 0; i < n; i++)
    {
        if (arr[i]==search)
        {
            printf("Enter the number is found(base on index):- %d *_*", i);
            k++;
            break;
        }
    }
    if(k==0){
        printf("Enter number is not found *_*");
    }
}
int main()
{
    int n, i;
    int search,k=0;
    printf("Enter the size of array:- ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the element of array:-\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number you want to search:- ");
    scanf("%d", &search);
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i]==search)
    //     {
    //         printf("Enter the number is found:- %d *_*", i+1);
    //         k++;
    //         break;
    //     }
    // }
    // if(k==0){
    //     printf("Enter number is not found *_*");

    // }
    linearsearch(arr,n,search);

    return 0;
}