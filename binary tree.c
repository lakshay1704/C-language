//program to implement binary tree

#include<stdio.h>
#include<conio.h>

struct node(){
    int data;
    struct Node* left;
    struct Ndde* right;
};

//newNode() here allocates a new node with the given data and NULL left and right pointers
struct node* newNode(int data){
    //allocate memory for new node
    struct node* node = (struct node*)malloc(sizeof(struct node));

    //assign data to this node
    node->data = data;

    //initialize left and right children as NULL
    node->left = NULL;
    node->right = NULL;
    return(node);
};

void main(){
    struct node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);

    root->left->left = newNode(4);

    getchar();
    return 0;
}


