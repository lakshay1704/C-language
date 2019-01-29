//Queue as a linked list
#include<stdio.h>
#include<conio.h>

struct ListNode{
    int data;
    struct ListNode *next;
};
struct Queue *createQueue(){
    struct Queue *Q;
    struct ListNode *temp;
    Q = malloc(sizeof(struct Queue));
    if(!Q){
        return NULL;
    }
    temp = malloc(sizeof(struct ListNode));
    Q->front = Q->rear = NULL;
    retrun Q;
};

void isEMptyQueue();
void EnQueue();
void DeQueue();
void main(){
    int choice;
    printf("\n Enter 1 to create list \n Enter 2 to enter data \n Enter 3 to delete data \n Enter 4 to exit \n");
    scanf("%d",&choice);
    switch(choice){
    case 1:
        createQueue();
        break;
    case 2:
        EnQueue();
        break;
    case 3:
        DeQueue();
        break;
    case 4:
        exit(0);
    default:
        printf("Wrong Choice \n");
    }
}

int isEMptyQueue(struct Queue *Q){
    return (Q->front = NULL);
}

void EnQueue(Struct Queue *Q,int data){
    struct ListNOde *newNode;
    newNOde = malloc(sizeof(struct ListNOde));
    if(!newNode){
        return NULL;
    }
    newNode->data = data;
    newNOde->next = NULL;
    if(q->rear){
        Q->rear->next = newNode;
        Q->rear = newNode;
    }
    if(Q->front == NULL){
        Q->front = Q->rear;
    }
}

int DeQueue(struct Queue *Q){
    int data = 0;
    struct ListNode *temp;
    if(isEMptyQueue(Q)){
        printf("Queue is Empty");
        return 0;
    }
    else{
        temp = Q->front;
        data = Q->front->data;
        Q->front = Q->front->next;
        free(temp);
    }
    return data;
}
