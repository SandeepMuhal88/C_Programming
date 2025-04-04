#include<stdio.h>
#include<stdlib.h>

struct bank
{
    int ID;
    char Name;
    float salary;
    int *y;
};

int main(){
    struct bank *S;
    S=(struct bank*)malloc(sizeof(struct bank));
    S -> ID=121;
    S-> Name='R';
    S-> salary=2300.00;
    S-> y=(int*)malloc(sizeof(int));
    *(S->y)=15;
    printf("%d\n",S->ID);
    printf("%c\n",S->Name);
    printf("%f\n",S->salary);
    // printf("%d\n",S->y);S 
    return 0;
}