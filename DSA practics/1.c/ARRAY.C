#include <stdio.h>
#include<limits.h>
int main()
{
    // int arr[5];
    // for(int i=0;i<=4;i++){
    //     printf("Enter element number %d\n",i+1);
    //     scanf("%d",&arr[i]);
    // }

    // // for(int i=0;i<5;i++){
    // //     printf("%d ",arr[i]);
    // // }
    // // print Reverse array
    // for(int i=4;i>=0;i--){
    //     printf("%d ",arr[i]);
    // }

    // int marks[10];
    // for(int i=0;i<10;i++){
    //     printf("\nEnter the marks %d:- ",i+1);
    //     scanf("%d ",&marks[i]);
    // }
    // for(int i=0;i<10;i++){
    //     // if(marks[i]<35){
    //     //     printf("%d ",marks[i]);
    //     // }
    //     printf("Address of array %p\n",&marks[i]);
    // }
    // Search minimum value in array
    // int arr[7]={-12,-3,-5,-7,-22,-19,-9};
    // // int max=-1;
    // int max= arr[0];
    // for(int i=0;i<=6;i++){
    //     if(max<arr[i]){
    //         max=arr[i];

    //     }
    // }
    // printf("%d",max);

    // find maximum value user input
    int n;
    printf("Enter the size of a Array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    for (int i = 0; i <= n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("The max value %d", max);

    return 0;
}