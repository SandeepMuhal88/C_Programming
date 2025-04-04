// #include<stdio.h>
// int main(){
//     int x;
//     int arr[8]={1,2,3,4,5,6,7,8};
//     int totalpairs=0;
//     printf("Enter the number:-");
//     scanf("%d",&x);
//     for(int i=0;i<=7;i++){
//         for(int j=i+1;j<=7;j++){
//             if(arr[i]+arr[j]==x){
//                 totalpairs++;
//                 printf("(%d,%d)\n",arr[i],arr[j]);
//             }
//         }
//     }
//     printf("%d",totalpairs);

//     return 0;
// }

// Print reverse array 
// #include<stdio.h>
// int main(){
//     int arr[6]={17,20,35,40,45,76};
//     int brr[6];
//     for (int i = 0; i <=5; i++)
//     {  brr[i]=arr[5-i];
//     }
//     for (int i = 0; i <=5; i++)
//     {
//         printf("%d ",brr[i]);
//     }
//     return 0;
    
    
// }

// Without using extra array
// #include<stdio.h>
// void reverse(int arr[],int n){
//     int i=0;
//     int j= n;
//     while (i<j)
//     {
//         int temp=arr[i];
//         arr[i]=arr[j];
//         arr[j]=temp;
//         i++;
//         j--;
//     }
    //  using for loop
    // for (int i=0 ,int j=n; i<j; i++,j--)
    // {
    //     int temp=arr[i];
    //     arr[i]=arr[j];
    //     arr[j]=temp;
    // }
    
//     return;
// }
// int main(){
//     int n;
//     printf("Enter the size of array:- ");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<=n;i++){
//         scanf("%d",&arr[i]);
//     }
//     reverse(arr,n);
//     for(int i=0;i<=n;i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }




// Search a element in Array
#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[7]={12,42,64,2,1,4,2};
    int x;
    printf("Enter the value find the in array: ");
    scanf("%d",&x);
    int idx=0;
    bool flag=false;

    for(int i=0;i<=6;i++){
        if(arr[i]==x){
            flag=true;
            idx=i;
            break;
        }
    }
    if(flag==false){
        printf("%d is not present in array",x);
    }else{
        printf("%d is the persent in array and its index is %d",x,idx);
    }
    return 0;
}










