#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("Enter the size of array:-");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("THe minimum value array:- %d ",min);
    return 0;
}