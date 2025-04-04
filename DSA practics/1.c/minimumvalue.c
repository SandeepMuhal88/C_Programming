#include<stdio.h>
#include<limits.h>
int main(){

    int n;
    printf("Enter the size of arry:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    // int arr[7]={-78,-54,-85,95,-45,32,-4};
    int max=arr[0];
    for(int i=0;i<=6;i++){
        if(max>=arr[i]){
            max=arr[i];
        }
    }
    printf("Minimum value is: %d",max);
    return 0;
}