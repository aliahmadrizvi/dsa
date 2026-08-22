#include<stdio.h>
#define MAX 5 
int front = -1,rear = -1;
int queue[MAX];
// prototype functions 
void dequeue();
void enqueue();
int isFull();
int isEmpty();
void display();
void peek();

int main(){
     char choice = 'Y'; int var;
    while(choice == 'Y' || choice == 'y'){
        printf("1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.Peek\n");
        printf("4.Display\n");
        printf("5.Exit\n");
        printf("Enter the function want to perform : ");
        scanf("%d",&var);

        switch (var)
        {
        case 1:
            enqueue();

            break;
        case 2:
            dequeue();

            break;

        case 3:
            peek();

            break;

        case 4:
            display();

            break;

        case 5 :
            choice = 'N';
            break;

        
        default:
        printf("Erorr in input\n");
            break;
        }
        printf("Do you want to continue : ");
        scanf(" %c",&choice);

    }
    return 0 ; 
}

void enqueue(){
    int value ;
    if(isFull()){
        printf("Queue is Full\n");
        return;
    }
    
        printf("Enter the Element : ");
        scanf("%d",&value);

    if( rear == -1 && front == -1){
       
        rear=front=0;
        queue[rear]=value;
    }
    else{
       
        rear++;
         queue[rear]=value;

    }

    

}
void dequeue(){
    if(isEmpty()){
        printf("Queue is Empty\n");
        return;

    }
    else if(front==rear){
         printf("Deleted element %d\n",queue[front]);
        front=rear=-1;
    }
    else{
        printf("Deleted element %d\n",queue[front]);
        front++;
    }
}


int isFull(){
    return rear == MAX -1;
}


int isEmpty(){
    return front == -1;
}


void display(){
    if(isEmpty()){
         printf("Queue is Empty\n");
        return;
        
    }
    else{
        for (int i = front; i <= rear; i++)
        {
            printf("%d ",queue[i]);
        }
        printf("\n");
        
    }
}

void peek(){
   if(isEmpty()){
         printf("Queue is Empty\n");
        return;
        
    }
    else{
        printf("Front->%d\n",queue[front]);
    }
}