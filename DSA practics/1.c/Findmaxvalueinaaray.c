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
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("The maimum value %d ",max);

    return 0;
}
