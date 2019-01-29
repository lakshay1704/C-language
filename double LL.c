//implementing double linked list inserting and deleting a node

//creating a node for a double linked list
struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};


void main(){
    //adding some data into the double linked list
    struct Node* head = NULL;
    struct Node* head->prev = NULL;
    struct Node* head->next = second; //this should be pointing to the second which is pointing to the second node
    struct Node* second->next = third; //this should be pointing to the third which is a pointer pointing to the third node
    struct Node* second->prev = head; //this should be pointing to the last pointer that is pointing to the node
    struct Node* third->next = NULL;
    struct Node* third->prev = second;
    //allocating memory
    head = (struct Node*)malloc(sizeof())
    //adding a new node at the end of a double linked list
    void append(struct Node** head_ref, int new_data){
        //allocating memory to the new node
        struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
        struct Node* last = *head_ref;

        //putting data in the new node
        new_node->next = NULL;

        //if the linked list is empty then make the new node as the head node
        if(*head_ref == NULL){
            new_node->prev = NULL;
            *head_ref = new_node;
            return;

        }
        //else traverse till the last node
        while (last->next != NULL){
            last = last->next;

        }
        //changing the next of the last node
        last->next = new_node;

        //making last node as previous of new node
        new_node->prev = last;
        return;
    }
    head->data = 1;
    //calling the append function
        append(&second,2);
        //deleting a node from the end of the double linked list
        //printing the double linked list
        void printlist(struct Node *n){ //this means that n which is passed to the function will be a pointer
            while (n!=NULL){
                printf("%d",n->data);
                n = n->next;

            }
            printlist();
}
