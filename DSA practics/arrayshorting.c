#include<stdio.h>
int main(){
	int n,a,i,j;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the element of array: ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	return 0;
	}