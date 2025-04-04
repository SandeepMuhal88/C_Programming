#include<stdio.h>
#include<stdlib.h>
struct slinklist{
    int data;
    struct slinklist *next;

};
typedef struct slinklist node;
node *start=NULL;
node* getnode(){
    node* newnode;
    newnode=(node*)malloc(sizeof(node));
    printf("Enter the data:-");
    scanf("%d",&newnode->data);
    newnode->next=NULL;return
    newnode;
    printf("The data %d",newnode->data);
}
int main(){
    getnode();
    return 0;
}