#include<stdio.h>
void linersearch(int a[],int r,int search){
     int k=0;
    for(int i;i<r;i++){
        if(a[i]==search){
            printf("Number is found at position(Base on Index) %d\n",i);
            k++;
            break;
        }
    }
    if(k==0){
        printf("Number is not found<..>\n");
    }
}

int main(){
    int i;
    int search;
    int r;

    printf("Enter the Size of array:-");
    scanf("%d",&r);
    int a[r];
    printf("Enter the Element of Array:- ");
    for ( i = 0; i < r; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the Number that you want to search:-");
    scanf("%d",&search);
    linersearch(a,r,search);
    

    return 0;
}