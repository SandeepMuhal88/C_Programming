#include<stdio.h>
int main(){
	int mark[6];
		float x;
	printf("Enter ph marks: ");
	scanf("%d",&mark[0]);
	printf("Enter ph marks: ");
	scanf("%d",&mark[1]);
	printf("Enter ph marks: ");
	scanf("%d",&mark[2]);
	printf("Enter ph marks: ");
	scanf("%d",&mark[3]);
	printf("Enter ph marks: ");
	scanf("%d",&mark[4]);
	printf("Enter ph marks: ");
	scanf("%d",&mark[5]);
	x = (mark[0]+mark[1]+mark[2]+mark[3]+mark[4]+mark[5])/(600)*100;
	printf("Total precentage: %f",x);
	
	
	return 0;
}
