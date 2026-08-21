#include<stdio.h>
#define MAX 5 
int stack[MAX];
int top =-1;
void Push();
void Pop();
void Display();
void Peek();
int IsEmpty();
int IsFull();

int main(){
    
    char choice = 'Y'; int var;
    while(choice == 'Y' || choice == 'y'){
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Peek\n");
        printf("4.Display\n");
        printf("5.Exit\n");
        printf("Enter the function want to perform : ");
        scanf("%d",&var);

        switch (var)
        {
        case 1:
            Push();

            break;
        case 2:
            Pop();

            break;

        case 3:
            Peek();

            break;

        case 4:
            Display();

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


    return 0;

}

int IsEmpty()
{
    return top == -1;   
}

int IsFull()
{
    return top == MAX-1;   
}
void Push(){
    int value;
    if(IsFull()){
        printf("Stack is Full\n");
    }
    else{
        printf("Enter your Num: ");
        scanf("%d",&value);
        top++;
        stack[top]=value;

    }
}
void Pop(){
    if(IsEmpty()){
        printf("Stack is Empty\n");
    }
    else{
        printf("Deletd Element : %d\n",stack[top]);
        top--;
    }
}
void Peek(){
    if(IsEmpty()){
        printf("Stack is Empty\n");

    }
    else{
        printf("Top-->%d\n",stack[top]);
    }
    


}
void Display(){
    if(IsEmpty()){
        printf("Stack is Empty\n");
    }
    else{
        for(int i=top;i>=0;i--){
            printf("%d\n",stack[i]);
        }
    }
}