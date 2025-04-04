#include<stdio.h>
void main(){
    int temp,n;
    printf("Enter the size of array:- ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the Elements of the array:-\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Shorting is process......\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("After sorthing array:::::\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}