#include<stdio.h>
void bubble_sort(int n,int arr[]){
    int temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

}
int main(){
    int n;
    printf("Enter the size of array:-");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array:- ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    printf("After short the elements::\n");
    bubble_sort(n,arr);


    return 0;
}