#include<stdio.h>
int main(){
    int temp,i,j,x,n;
    int min;
    printf("Enter the size of array:- ");
    scanf("%d",&n);
    int aar[n];
    printf("Enter the elements of array:- ");
    for(i=0;i<n;i++)
        scanf("%d",&aar[i]);
    for(i=0;i<n-1;i++){
        min=aar[i];
        x=i;
        for(j=i+1;j<n;j++){
            if(min>aar[j])
            {
                min=aar[j];
                x=j;

            }
        }
        temp=aar[i];
        aar[i]=aar[x];
        aar[x]=temp;


    }
    printf("After Selection short::\n");
    for(i=0;i<n;i++){
        printf("%d ",aar[i]);
    }
    return 0;
}