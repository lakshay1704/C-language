#include<stdio.h>
#include<conio.h>

struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
}*p = NULL;

void add();
void delete();

void main(){
    int choice;
    printf("\n Enter 1 to add \n Enter 2 to delete \n Enter 3 to display \n Enter 4 to exit \n");
    scanf("%d",&choice);
    switch(choice){
    case 1:
        add(&p);
        break;
    case 2:
        delete(&p);
        break;
    case 3:
        display(&p);
        break;
    case 4:
        exit(0);
    default:
        printf("\n Wrong Choice \n");
    }
}

void add(struct Node **p){
    struct Node *newnode,*traverse;
    int item;
    newnode = (struct Node *)malloc(sizeof(struct Node));
    printf("\n Enter the data to be entered \n");
    scanf("%d",&item);
    newnode->data = item;
    newnode->prev = NULL;
    if(*p == NULL){
        *p = newnode;
        newnode->next = NULL;
    }
    else{
        traverse = *p;
        newnode->next = traverse;
        traverse->prev = newnode;
        *p = newnode;
    }
    printf("\n Successful \n");
}

void delete(struct node **p){
    struct Node *deletenode,*temp;
    int x;
    if(*p == NULL){
        printf("\n List is empty \n");
    }
    else{
        deletenode = *p;
        while (deletenode->next != NULL){
            deletenode = deletenode->next;
        }
        temp = deletenode;
        x = temp->data;
        deletenode->next = NULL;
        if(temp->next == NULL && temp->prev == NULL){
            *p == NULL;
            free(temp);
            printf("\n Deleted successfully \n");
        }
    }
}
