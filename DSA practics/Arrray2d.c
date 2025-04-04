#include<stdio.h>
// void fun(int a){
//     a=7;
//     return;
// }
// int main(){
//     int a=4;
//     printf("%d\n",a);
//     fun(a);
//     printf("%d",a);
//     return 0;
// }
 void fun(int arr[]){
    arr[0]=10;
    return;
 }
 int main(){
    int arr[5]={9,2,5,2,6};
    printf("%d\n",arr[0]);
    fun(arr);
    printf("%d",arr[0]);
 }