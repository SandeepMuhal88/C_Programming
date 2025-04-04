#include<stdio.h>
#include<stdlib.h>
int main(){

	int*x;
	x=(int*)malloc(sizeof(int));
	*x=89;
	printf("%d\n",*x);
	int*y;
	y=(int*)calloc(5,sizeof(int));
	// *y=52;
	// *(y+1)=85;
	// *(y+2)=86;
	// *(y+3)=90;
	// *(y+4)=100;
	// printf("%d\n",*(y+2));
	// User input
	printf("Enter the element :-\n");
	scanf("%d",&*(y+0));
	scanf("%d",&*(y+1));
	scanf("%d",&*(y+2));
	scanf("%d",&*(y+3));
	scanf("%d",&*(y+4));
	printf("All Elemnt there\n");
	printf("%d %d %d %d %d\n",*(y),*(y+1),*(y+2),*(y+3),*(y+4));


	// int a,b;
	// printf("Enter a number ");
	// scanf("%d",&a);
	return 0;
}