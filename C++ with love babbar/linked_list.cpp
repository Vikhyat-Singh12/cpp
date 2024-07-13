#include<iostream>
#include<string.h>
using namespace std;



// Insertion at HEAD & TAIL in  SINGLE LINKED LIST.

/*
class Node{
    public:
        int data;
        Node* next;

        // constructor
        Node(int data){
            this-> data = data;
            this->next = NULL;
        }
};


void insertAtHead(Node* &head,int d){
    
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail,int d){
    
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void print(Node* &head){
    Node* temp = head;

    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){

    // created a new node
    Node* node1 = new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    // head is pointed to node1
    Node* head = node1;
    Node* tail = node1;
    print(head);

    insertAtHead(head,11);
    print(head);
    insertAtHead(head,12);
    print(head);
    insertAtHead(head,13);
    print(head);


    insertAtTail(tail,9);
    print(head);
    insertAtTail(tail,8);
    print(head);
    insertAtTail(tail,7);
    print(head);
}
*/




// Insertion at MID(or at any positon) in  SINGLE LINKED LIST and deletation of Node.

/*
class Node{
    public:
        int data;
        Node* next;

        // constructor
        Node(int data){
            this-> data = data;
            this->next = NULL;
        }

        // destructor
        ~Node(){
            int value = this->data;
            // memory free
            if(this->next != NULL){
                delete next;
                this->next = NULL;
            }
            cout<<"Memory is free for node with data "<<value<<endl;
        }
};

void insertAtHead(Node* &head,int d){
    
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail,int d){
    
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertatPosition(Node* &tail, Node* &head,int position,int d){

    // insert at Start.
    if(position == 1 ){
        insertAtHead(head,d);
        return;
    }
    Node* temp = head;
    int cnt= 1;

    while (cnt<position-1)
    {
        temp = temp->next;
        cnt++;
    }

    // Insert at Last Position
    if(temp->next == NULL){
        insertAtTail(tail,d);
        return;
    }

    // Creating  a node for d
    Node* nodetoInsert = new Node(d);
    nodetoInsert->next = temp->next;
    temp->next = nodetoInsert;    
}

void deleteNode(int position , Node* &head,Node* &tail){

    // deleting first or start node
    if (position == 1 )       
    {
       Node* temp = head;
       head = head->next;
       // memory free start node
       // If head becomes NULL, update tail as well
        if (head == NULL) {
            tail = NULL;
        }
        temp->next = NULL;
        delete temp; 
    }

    // deleting any middle node or last node
    else{
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while (cnt<position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        // If we are deleting the last node, update the tail pointer
        if (prev->next == NULL) {
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
    
}


void print(Node* &head){
    Node* temp = head;

    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}


int main(){
    Node* node1 = new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    // head is pointed to node1
    Node* head = node1;
    Node* tail = node1;
    print(head);

    insertAtTail(tail,9);
    print(head);
    insertAtTail(tail,8);
    print(head);
    insertAtTail(tail,7);
    print(head);

    insertatPosition(tail,head,3,15);
    print(head);
    insertatPosition(tail,head,1,20);
    print(head);
    insertatPosition(tail,head,7,25);
    print(head);

    cout<<"Head -> "<<head->data<<endl;
    cout<<"Tail -> "<<tail->data<<endl;

    deleteNode(1,head,tail);
    print(head);
    
    cout<<"Head -> "<<head->data<<endl;
    cout<<"Tail -> "<<tail->data<<endl;

    deleteNode(6,head,tail);
    print(head);

    cout<<"Head -> "<<head->data<<endl;
    cout<<"Tail -> "<<tail->data<<endl;
}

 
*/



// Doubly Linked List

/*
class Node{
    public:
        int data;
        Node* prev;
        Node* next;

        // constructor
        Node(int d){
            this-> data = d;
            this->prev = NULL;
            this->next = NULL;

        }

        ~Node(){
            int val = this->data;
            if(next != NULL){
                delete next;
                next = NULL;
            }
            cout<<"Memeory free for data "<<val<<endl;
        }
};


// traversing a linked list
void print(Node* &head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}


// gives length of Linked List.
int getLength(Node* head){
    int len = 0;
    Node* temp = head;

    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void insertAtHead(Node* &head,Node* &tail,int d){
    // For empty List
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
    Node* temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
    }
}

void insertAtTail (Node* &head, Node* &tail,int d){
    // For empty list
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
    Node* temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
    }
}

void insertAtPosition(Node* &tail,Node* &head, int position, int d){
    // insert at Start.
    if(position == 1 ){
        insertAtHead(head,tail,d);
        return;
    }
    Node* temp = head;
    int cnt= 1;

    while (cnt<position-1)
    {
        temp = temp->next;  
        cnt++;
    }

    // Insert at Last Position
    if(temp->next == NULL){
        insertAtTail(head,tail,d);
        return;
    }

    // Creating  a node for d
    Node* nodetoInsert = new Node(d);
    nodetoInsert->next  =  temp->next;
    temp->next->prev = nodetoInsert;
    temp->next = nodetoInsert;
    nodetoInsert->prev = temp;
}

void deleteNode(int position , Node* &head,Node* &tail){

    // deleting first or start node
    if (position == 1 )       
    {
       Node* temp = head;
       temp->next->prev = NULL;
       head = temp->next;
       // memory free start node
        temp->next = NULL;
        delete temp; 
    }

    // deleting any middle node or last node
    else{
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while (cnt<position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
    
}


int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    print(head);
    cout<<getLength(head)<<endl;

    insertAtHead(head,tail,11);
    print(head);
    insertAtHead(head,tail,12);
    print(head);

    cout<<getLength(head)<<endl;
    
    insertAtTail(head,tail,11);
    print(head);
    insertAtTail(head,tail,12);
    print(head);

    cout<<getLength(head)<<endl;
    cout<<"Head -> "<<head->data<<endl;
    cout<<"Last -> "<<tail->data<<endl;

    insertAtPosition(tail,head,1,15);
    print(head);
    insertAtPosition(tail,head,7,20);
    print(head);
    insertAtPosition(tail,head,5,25);
    print(head);

    cout<<"Head -> "<<head->data<<endl;
    cout<<"Last -> "<<tail->data<<endl;

    deleteNode(1,head,tail);
    print(head);
    
    cout<<"Head -> "<<head->data<<endl;
    cout<<"Last -> "<<tail->data<<endl;

    deleteNode(7,head,tail);
    print(head);
    
    cout<<"Head -> "<<head->data<<endl;
    cout<<"Last -> "<<tail->data<<endl;
}
*/




// CIRCULAR LINKED LIST



class Node{
    public:
        int data;
        Node* next;

        // Constructor
        Node(int d){
            this->data = d;
            this->next = NULL;
        }

        ~Node(){
            int value = this->data;
            if(this->next != NULL){
                delete next;
                next = NULL;
            }
            cout<<"Memory is free for node with data: "<<value<<endl;
        }
};

void insertNode(Node* &tail,int element,int d ){

    // empty list
    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }

    // assuming that the element is present in the list
    else{
        Node* curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }
        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(Node* &tail){
    
    Node* temp = tail;

    if(tail == NULL){
        cout<<"List is Empty"<<endl;
        return;
    }

    do{
        cout<<tail->data<<" ";
        tail = tail->next;
    }while (tail!= temp);
    cout<<endl;
    
}

void deleteNode(Node* &tail,int value){
    // empty list
    if(tail == NULL){
        cout<<"List is empty, please check again"<<endl;
    }
    else{
        // Assuming that value is present.

        Node* prev =tail;
        Node* curr = prev->next;
        while (curr->data != value)
        {
            prev = prev->next;
            curr = curr->next;
        }
        prev->next= curr->next;

        // 1 Node Linked List
        if(curr == prev){
            tail=NULL;
        }

        //  >=2 Node Linked list
        if(tail == curr){
            tail = prev;
        }
        curr->next = NULL; 
        delete curr;
    }
}

int main(){
    Node* tail = NULL;

    insertNode(tail,5,3);
    print(tail);
    insertNode(tail,3,5);
    print(tail);
    insertNode(tail,5,7);
    print(tail);
    insertNode(tail,7,9);
    print(tail);

    // deletation
    deleteNode(tail,5);
    print(tail);
    deleteNode(tail,3);
    print(tail);
}