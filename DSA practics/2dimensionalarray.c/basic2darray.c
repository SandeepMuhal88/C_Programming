#include<stdio.h>
int main(){

    // int arr[3][3]={{1,2,5},{3,4,5},{4,8,8}};

    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         printf("%d ",arr[i][j]);
    //     }
    //     printf("\n");
    // }
    // arr[0][0]=1;
    // arr[0][1]=2;
    // arr[1][1]=3;
    // arr[1][2]=4;
    // 1 2
    // 3 4


    //  User input
    int brr[3][3];
    printf("Enter the value of array: ");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&brr[i][j]);
        }
        // printf("\n");
    }
    for (int i = 0; i <3 ; i++){
        for(int j=0;j<3;j++){
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
    
    

    return 0;
}