#include<stdio.h>
int main(){
    // int i=0;
    // i=printf("%d",i)?printf("Hello"):printf("Bye");
    // printf("%d\n",i);
    // int i=0;
    // i=i?printf("Hello"):printf("Bye");
    // printf("%d\n",i);

    //  Logical 
    // int i=5;
    // int j=0,k=11,l=3;
    // l=printf("%d",i=2)&&(j=0)&&printf("%d",k)&&l++;
    // printf("%d %d %d %d\n",i,j,k,l);
    // int i=1;
    // i=i++||++i||++i;
    // printf("%d\n",i);
    // int i=2,j=4,k=5;
    // k=printf("%d\n",i)||printf("%d",j)||printf("Hello");
    // printf("%d %d %d ",i,j,k);
    // int i=2,j=4,k=3;
    // k=i<j||k<i;
    // printf("%d",k);


    int i=2,j=3,k;
    k=!printf("%d",!++i)<printf("!%d",!j);
    printf("%d",k);
    return 0;
}