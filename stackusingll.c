#include<stdio.h>
#include<conio.h>

struct Node{
    int data;
    struct Node *next;
}*top = NULL;

void push(int);
void pop();
void display();
void main(){
    int choice,value;
    clrsc();
    printf("\n Enter 1 to push \n Enter 2 to pop \n Enter 3 to display");
    printf("Enter choice \n ");
    scanf("%d",&choice);
    switch(choice){
    case 1:
        printf("Enter value to be inserted \n");
        scanf("%d",&value);
        push(value);
        break;
    case 2:
        pop();
        break;
    case 3:
        display();
        break;
    case 4:
        exit(0);
    default:
        printf("\n Wrong selection \n");

    }
}

void push(int value){
    struct Node *newnode;
    newnode = (struct Node *)malloc(sizeof(struct NOde));
    newnode->data = value;
    if(top == NULL){
        newnode->next = NULL;
    }
    else{
        newnode->next = top;
    }
    top = newnode;
    prinf("\n Insertion is Successful \n");
}

void pop(){
    if(top == NULL){
        printf("\n stack is empty \n");
    }
    else{
        struct Node *temp = top;
        printf("\n Deleted element is %d",temp->data);
        top = top->next;
        free(temp);
    }
}

void display(){
    if (top == NULL){
        printf("\n Stack is empty \n");
    }
    else{
        struct Node *temp = top;
        while (temp->next != NULL){
            printf("%d",temp->next);
        }
        printf("%d",temp->data);
    }
}
