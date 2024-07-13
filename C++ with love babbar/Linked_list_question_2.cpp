#include<iostream>
using namespace std;



// Q.> Write a progarme to reverse the k element in the likked list?

/*
class Node{
    public:
        int data;
        Node* next;

        Node(int d){
            this->data = d;
            this->next = NULL;
        }
};

void insertAtLast(Node* &tail,int d){
    Node* temp = new Node(d);
    if(tail == NULL){
        tail = temp;
    }
    tail->next = temp;
    tail = temp;
}

void print(Node* head){
    if(head == NULL){
        cout<<"Linked List is empty!"<<endl;
    }
    else{
        while (head != NULL)
        {
            cout<<head->data<<" ";
            head= head->next;
        }
        cout<<endl;
    }
}

Node* reverseKelement(Node* &head,int k){
    // base case
    if(head == NULL){
        return head;
    }

    // step1: reverse firdt K nodes
    Node* next = NULL;
    Node* curr = head;
    Node* prev = NULL;
    int cnt = 0;

    while (curr!= NULL && cnt<k)
    {
        next = curr->next;
        curr->next = prev;
        prev= curr;
        curr = next;
        cnt++;
    }

    // step 2: Recursion dekhlega aage ka
    if (next != NULL)
    {
        head->next = reverseKelement(next,k);
    }
    
    // step3: return head of reversed list
    return prev;
    
}

int main(){
    Node* head = new Node(10);
    Node* tail = head;

    insertAtLast(tail,20);
    insertAtLast(tail,30);
    insertAtLast(tail,40);
    insertAtLast(tail,50);
    insertAtLast(tail,60);

    print(head);
    Node* ans = reverseKelement(head,2);
    cout<<"After reversing it 2 times: "<<endl;
    print(ans);
}
*/



// Q.> Write a programe to check wheather a linked List is circular or not?

/*
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

bool isCircularList(Node* head){
    // empty List
    if(head==NULL){
        return true;
    }

    Node* temp = head->next;
    while (temp!=NULL && temp != head)
    {
        temp = temp->next;
    }
    if(temp == head) return true;

    return false;
}


int main(){
    Node* tail = NULL;

    insertNode(tail,5,3);
    insertNode(tail,3,5);
    insertNode(tail,5,7);
    insertNode(tail,7,9);
    print(tail);

    if(isCircularList(tail)){
        cout<<"Linked List is Circular in nature"<<endl;
    }
    else{
        cout<<"Linked list is not Circular"<<endl;
    }
}


*/




// watch the lecture number 47 again.
