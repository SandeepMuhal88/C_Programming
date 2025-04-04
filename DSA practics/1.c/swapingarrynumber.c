// #include<stdio.h>
// void fun(int x[]){
//     int temp=x[0];
//     x[0]=x[1];
//      x[1]=temp;
//     return;
// }
// int main(){
//     int arr[2]={9,5};
//     printf("%d %d\n",arr[0],arr[1]);
//     fun(arr);
//     printf("%d %d \n",arr[0],arr[1]);
//     return 0;
// }

// Evenoddnumber to creat logic question
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }

    //  int arr[8]={1,2,3,4,5,6,7,8,9};
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            arr[i] *= 2;
        }
        else
        {
            arr[i] += 10;
        }
    }
    for (int i = 0; i <= n; i++)
    {
        printf("\n%d ", arr[i]);
    }
    return 0;
}



// #include<stdio.h>
// // void fun(int a){
// //     a=7;
// //     return;
// // }
// // int main(){
// //     int a=4;
// //     printf("%d\n",a);
// //     fun(a);
// //     printf("%d",a);
// //     return 0;
// // }
//  void fun(int arr[]){
//     arr[0]=10;
//     return;
//  }
//  int main(){
//     int arr[5]={9,2,5,2,6};
//     printf("%d\n",arr[0]);
//     fun(arr);
//     printf("%d",arr[0]);
//  }
