#include<stdio.h>
int main(){
    int i,search,l,E,mid;
    int n;
    printf("Enter the size of array:- ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the element of array__");
    for(i=0;i<n;i++){
        scanf("%d",&arr[mid]);
    }
    printf("Enter the number that you want to search:-");
    scanf("%d",&search);
    l=0;
    E=n -1;
    while(l<=E){
        mid=(l+E)/2;
        if(arr[mid]==search){
          printf("Number is Founnd !!");
          break;
        }
        else if(arr[mid]>search){
            E=mid-1;
        }
        else if(arr[mid]<search){
            l=mid+1;
        }
    }
    if(l>E){
        printf("Number is not founnd???");
        }
    return 0;
}