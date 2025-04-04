#include<stdio.h>
int main(){

    int i=065,j=0x63,k;
    k=i>=j;
    printf("%x %o %d\n",i,j,k);
    int y=0;
    y=y==y==y;
    printf("%d",y);
    // int i=32767,j=32768,k;
    // k=i<j;
    // printf("%d %d %d\n",i,j,k);
    // int i=2;
    // i=i++ + ++i + ++i;
    // printf("%d\n",i);
    // int a=3;
    // printf("%d %d %d \n",a++,++a,a++);
// int a,b;
// a=343;
// printf("%o\n",a);
// printf("%x\n",a);
// double x;
// x=1.903;
// printf("%f\n",x);
// int c='a';
// printf("%c\n",c);
// int i=7,j=3;
// float k;
// k=i/j;
// printf("%f\n",k);
// int x=10,y;
// y=--x;
// printf("%d %d\n",x,y);
// y=x++;
// printf("%d %d\n",x,y);



// int i=23,j=41,k=19,l=7;
// l=i--;
// j=++k;
// k=j--;
// i=k++;
// j=l++;
// l=++i;
// printf("%d %d %d %d\ny",i,j,k,l);



// printf("%ld",sizeof(x));

//  printf("Enter a number:- ");
//  scanf("%d",&a);
//  printf("Enter b number:- ");
//  scanf("%d",&b);
//  int c;
//  c=a+b;
//  printf("Sum of a&b is %d",c);

return 0;
}
