#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the size  of 2-D array :-");
    scanf("%d %d",&r,&c);
    int brr[r][c];
    printf("Enter the element of array:-");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++){
            scanf("%d",&brr[i][j]);
        }
        printf("\n");
 
    }
    printf("The 2-D array:- ");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}