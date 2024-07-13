#include<iostream>
using namespace std;


// Q.> Reverse a Linked List?


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


// This is an iterative solution for reversing the Linked List
void reverseLinkedList(Node* &head){
    if(head == NULL || head->next == NULL){
        return;
    }

    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;

    while (curr!=NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    head = prev;  
}


// Now we reverse the Linked list using Recursion.

void reversewithRecursion(Node* &head,Node* curr, Node* prev){
    // base case
    if(curr == NULL){
        head = prev;
        return;
    }

    Node* forward = curr->next;
    reversewithRecursion(head,forward,curr);
    curr->next = prev;

}

// Now using another method for reversing the Linked List using Recursion?

Node* reverseUsingRecuesion2(Node* head){
    // base case
    if(head == NULL || head->next == NULL){
        return head;
    }

    Node* chotaHead = reverseUsingRecuesion2(head->next);
    head->next->next = head;
    head->next = NULL;

    return chotaHead;
    
}


void insertAtTail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;

}

void print(Node* head){
    if(head == NULL){
        cout<<"Linked List is empty!"<<endl;
    }
    else{
        cout<<"Linked list is: ";
        while (head != NULL)
        {
            cout<<head->data<<" ";
            head=head->next;
        }
        cout<<endl;
    }
}


int main(){
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;


    // print(head);
    insertAtTail(tail,20);
    insertAtTail(tail,30);
    insertAtTail(tail,40);
    insertAtTail(tail,50);
    insertAtTail(tail,60);

    cout<<"Original: "<<endl;
    print(head);

    reverseLinkedList(head);

    cout<<"After reversing the Linked List: "<<endl;
    print(head);

    Node *curr = head;
    Node *prev = NULL;
    reversewithRecursion(head,curr,prev);

    cout<<"After reversing the Linked List using the Recursion: "<<endl;
    print(head);

    Node* reversedHead = reverseUsingRecuesion2(head);

    cout<<"After reversing the Linked List using the another method of Recursion: "<<endl;
    print(reversedHead);
}

*/


// Q.> Find the mid value of the Linked List?

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
    else{
        tail->next = temp;
        tail = temp;
    }
}

void print(Node* head){
    if (head==NULL)
    {
        cout<<"Linked List is empty."<<endl;
    }
    
    while (head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
    
}

int lenthOfLinkedList(Node* head){
    int cnt = 0;
    while (head != NULL)
    {
        cnt++;
        head = head->next;
    }
    return cnt;
}


// Finding middle value by first approach.
void midValue1(Node* head, int cnt){
        cnt = cnt/2;
        while (cnt)
        {
            head = head->next;
            cnt--;
        }
        cout<<"Mid value is: "<<head->data<<endl;
}

// Finding middle value by second Approach.

Node* midvalue2(Node* head) {
    // For 0 and 1 element in linked list
    if (head == NULL || head->next == NULL) return head;

    // For 2 elements in the linked list
    if (head->next->next == NULL) return head->next;

    // Now for n number of elements in the linked list
    Node* fast = head->next;
    Node* slow = head;

    while (fast != NULL && fast->next != NULL) {
        fast = fast->next->next;
        slow = slow->next;
    }
    
    return slow;
}


int main(){
    Node *node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    insertAtLast(tail,20);
    insertAtLast(tail,30);
    insertAtLast(tail,40);
    insertAtLast(tail,50);
    insertAtLast(tail,60);

    int len = lenthOfLinkedList(head);
    cout<<"Lenght: "<<len<<endl;
    print(head);
    midValue1(head,len);

    Node* mid = midvalue2(head);
    cout<<"Mid value by second method is: "<<mid->data<<endl;
}
*/



// Q.> Reverse the Doubly Linked List?

/*
class Node{
    public:
        int data;
        Node* prev;
        Node* next;
        
        Node(int d){
            this->data = d;
            this->next = NULL;
            this->prev = NULL;
        }
};

void insertAtTail(Node* &tail,Node* &head,int d){
    Node* temp = new Node(d);
    if(tail == NULL){
        tail = temp;
        head = temp;
    }
    else{
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void reverseDoubleLinkedList(Node* &head,Node* &tail){
    Node* ptr1 = head;
    Node* ptr2 = head->next;

    // Swap next and prev for all nodes of the doubly linked list
    ptr1->next = NULL;
    ptr1->prev = ptr2;
    while (ptr2 != NULL) {
        ptr2->prev = ptr2->next;
        ptr2->next = ptr1;
        ptr1 = ptr2;
        ptr2 = ptr2->prev;
    }
    head = ptr1;
}

void print(Node* head){
    if(head  == NULL){
        cout<<"Double Linked List is empty!"<<endl;
    }
    while (head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

int main(){
    Node* head = new Node(10);
    Node* tail = head;

    insertAtTail(tail,head,20);
    insertAtTail(tail,head,30);
    insertAtTail(tail,head,40);
    insertAtTail(tail,head,50);
    print(head);

    reverseDoubleLinkedList(head,tail);
    print(head);
}
*/


