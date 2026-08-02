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
    struct node * start = createNode(90);
     struct node * third = createNode(80);
      struct node * second = createNode(950);
       struct node * fourth = createNode(390);

       connect(start,third);
       connect(third,second);
       connect(second,fourth);



    traversal(start);
    
    return 0;
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