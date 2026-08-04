#include<stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node * next;
};
void traversal(struct node * ptr);
struct node * createNode(int value);
void connect(struct node * start, struct node * end);


int main(){
   struct node * start , *newNode , *temp;
   start=NULL;
   int choice=-1 , count=0;
   while(choice){
    newNode=(struct node *)malloc(sizeof(struct node));
    printf("Enter Data: ");
    scanf("%d",&newNode->data);
    newNode->next=NULL;
    if(start==NULL){
        start=temp=newNode;
    }
    else{
        temp->next=newNode;
        temp=newNode;
    }
    printf("Do you want to continue: ");
    scanf("%d",&choice);
   }
   temp=start;
   while (temp!=0)
   {
    printf("%d-> ",temp->data);
    temp=temp->next;
    count++;
   }
   printf("NULL\n");
   printf("NO of nodes are: %d",count);
   

  
   
}


void traversal(struct node * ptr){
    while(ptr!=NULL){
         printf("%d -> ", ptr->data);
        ptr=ptr->next;
    }
    printf("NULL\n");
}

struct node * createNode(int value){
    struct node * newNode = (struct node * )malloc(sizeof(struct node));

    newNode->data=value;
    newNode->next=NULL;

    return newNode;
}
void connect(struct node * start, struct node * end){
    start->next=end;
    
}