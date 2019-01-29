#include <stdio.h>
#include<conio.h>
struct Node{
    int data;
    struct Node *link;
};
struct Node *head = NULL, *x, *y, *z;
void insert_at_beg();
void delete_at_pos();
void traverse();
void main(){
    int ch;
    printf("Enter 1 to insert \n Enter 2 to delete \n 3 to display \n");
    while (1){
        printf("\n Enter your choice \n");
        scanf("%d",&ch);
        switch(ch){
        case 1:
            insert_at_beg();
            break;
        case 2:
            delete_at_pos();
            break;
        default:
            exit(0);
        }
    }
}
void insert_at_beg(){
    x = head;
    y = (struct Node *)malloc(sizeof(struct Node));
    printf("enter the data");
    scanf("%d",&y->data);
    while(x->link != head){
        x = x->link;
    }
    x->link = y;
    y->link = head;
    head = y;
}

void delete_at_pos(){
    if(head == NULL){
        printf("\n List is empty");
    }
    else{
        int c = 1,pos;
        printf("\n Enter the position to be deleted ");
        scanf("%d",&pos);
        x = head;
        while(c < pos){
            y = x;
            x = x->link;
            c++;
        }
        y->link = x->link;
        free(x);
    }
}

void traverse(){
   if (head == NULL){
    pirntf("\n List is empty");
   }
   else{
    x = head;
    while(x->link != head){
        printf("%d->",x->data);
        x = x->link;
    }
    printf("%d",x->data);
   }
}

