#include<stdio.h>
#include<stdlib.h>
 typedef struct Node{
    int data;
    struct Node*next;

 }Node;
 Node*creatNode(int data) {
    Node*newNode=(Node*)malloc(sizeof(Node));
    if(!newNode){
        printf("memorey error\n");
        exit(1);
    }
    newNode->data=data;
    newNode->next=NULL;
    return newNode;

 }
 void traverseList(Node*head){
    Node*current=head;
    while (current!=NULL)
    {
        printf("%d->",current->data);
        current =current->next;
    }
    printf("NULL\n");
    
 }
 int main(){
    Node*head=creatNode(10);
    head->next=creatNode(20);
    head->next->next=creatNode(30);
    printf("Link List:");
    traverseList(head);
    return 0;
 }