#include<stdio.h>
struct node {
  int data;
  struct node * next;
};
struct node * insertbeg(struct node * start , int value){
    struct node * newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data=value;


    newnode->next=start;
    start=newnode;

    return start;
}
int main(){
  return 0;
}