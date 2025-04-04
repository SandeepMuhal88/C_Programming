//#include<stdio.h>
//int main(){
//	for(int i=1;i<=10;i++)
//	{
//		printf("%d\n",i);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main(){
//	int n;
//	printf("Enter a number");
//	scanf("%d",&n);
//	for(int i=n;i<=n*10;i=i+n){
//		printf("%d\n",i);	
//		}
//	return 0;
//}
#include<stdio.h>
int main(){
	int day;
	printf("Enter number between(1-7)\n");
	scanf("%d",&day);
	switch(day){
		case 1:
			printf("Sunday\n");
			printf("Take rest\n");
			break;
		case 2:
			printf("Monday\n");
			printf("Going to work");
			break;
		case 3:	
			printf("Tuesday\n");
			printf("Take a varth for Hnuman");
			break;
		case 4:
			printf("Wednesday\n");
			printf("Work on your startup plan");
			break;
		case 5:
			printf("Thursday\n");
			printf("Going to work");
			break;	
		case 6:
				printf("Friday\n");
			printf("Going to work");
			break;
		case 7:
			printf("Saturday\n");
			printf("Going to work");
			break;	
		default:
			printf("Number is out of range");
			break;
	}
	return 0;
}








































