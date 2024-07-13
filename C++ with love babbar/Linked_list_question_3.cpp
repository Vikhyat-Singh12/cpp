#include<iostream>
using namespace std;



// Q.> Write a programe to delete the duplicate element in the sorted Linked List?

/*
class Node{
    public:
        int data;
        Node* next;

        Node(int d){
            this->data = d;
            this->next = NULL;
        }

        // Distructor
        ~Node(){
            int val= this->data;
            if (next!=NULL)
            {
                delete next;
                next = NULL;
            }
            cout<<"The memory free for the value is: "<<val<<endl;
        }
};

void uniqueSortedList(Node* &head){
    // Empty List
    if(head == NULL) return;

    // Non-empty List;
    Node* curr = head;

    while(curr != NULL && curr->next != NULL) {

        if(curr->data == curr->next->data){
            Node* nodeToDelete = curr->next;
            curr->next = curr->next->next; // Update next pointer before deleting node
            nodeToDelete->next = NULL; // Set next of nodeToDelete to NULL to avoid recursive deletion
            delete nodeToDelete;
        }
        
        else {
            curr = curr->next;
        }
    }
    return;
}

void insertToLast(Node* &tail, int d) {
    Node* temp = new Node(d);

    // Update tail pointer
    if (tail == NULL) {
        tail = temp;
    } else {
        tail->next = temp;
        tail = temp;
    }
}

void print(Node* head) {
    if (head == NULL) {
        cout << "Linked List is empty!" << endl;
    } else {
        Node* temp = head; // Use a temporary pointer
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}


int main(){
    Node* head = new Node(10);
    Node* tail = head;

    insertToLast(tail,20);
    insertToLast(tail,20);
    insertToLast(tail,30);
    insertToLast(tail,40);
    insertToLast(tail,40);
    insertToLast(tail,40);
    insertToLast(tail,50);

    cout<<"Before removing duplicate elements: ";
    print(head);

    uniqueSortedList(head);
    cout<<"After removing duplicate elements: ";
    print(head);
}
*/




// Q.> Write a programe to delete the duplicate element in the sorted Linked List?

class Node{
    public:
        int data;
        Node* next;

        Node(int d){
            this->data = d;
            this->next = NULL;
        }

        // Distructor
        ~Node(){
            int val= this->data;
            if (next!=NULL)
            {
                delete next;
                next = NULL;
            }
            cout<<"The memory free for the value is: "<<val<<endl;
        }
};

void removeDuplicate(Node* &head){
    Node* curr = head;
    while (curr != NULL)
    {
        Node* temp = curr->next;
        Node* prev = curr;
        while (temp != NULL)
        {
            if(curr->data == temp->data){
                prev->next = temp->next;
                temp->next = NULL;
                delete temp;
                temp = prev->next;
            }
            else{
                prev = temp;
                temp = temp->next;
            }
        }
        curr = curr->next;
    }
    
}

void insertToLast(Node* &tail, int d) {
    Node* temp = new Node(d);

    // Update tail pointer
    if (tail == NULL) {
        tail = temp;
    } else {
        tail->next = temp;
        tail = temp;
    }
}

void print(Node* head) {
    if (head == NULL) {
        cout << "Linked List is empty!" << endl;
    } else {
        Node* temp = head; // Use a temporary pointer
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}


int main(){
    Node* head = new Node(10);
    Node* tail = head;

    insertToLast(tail,40);
    insertToLast(tail,20);
    insertToLast(tail,40);
    insertToLast(tail,20);
    insertToLast(tail,30);
    insertToLast(tail,40);
    insertToLast(tail,50);

    cout<<"Before removing duplicate elements: ";
    print(head);

    removeDuplicate(head);
    cout<<"After removing duplicate elements: ";
    print(head);
}




// Q.> Write a programe to sperate 2 circular linked list in two halves?

