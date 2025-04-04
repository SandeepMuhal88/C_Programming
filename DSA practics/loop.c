#include<stdio.h>
int main()
{
    // int i,m=1,d=1;
    // for(i=1;i<9;i++){
    //     printf("%d ",m);
    //     m=m+d;
    //     d=!d;
    // }
    // int m=21;
    // for(int i=1;i<=4;i++){
    // printf("%d ",m);
    // m=m-i;
    // }

    int i,n=1;
    char m='A';
    for(i=1;i<=6;i++){
        printf("%d %c ",n++,m++);
    }
    return 0;
}