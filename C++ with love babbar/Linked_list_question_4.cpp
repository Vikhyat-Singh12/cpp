#include<iostream>
using namespace std;


// Q.> Write a programe to sort the 0s,1s,2s in the Linked List?


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

// Approach1: When data replacement is allowed!
void sortList(Node* &head) {
    int zerocnt = 0;
    int onecnt = 0;
    int twocnt = 0;

    Node* temp = head;
    while (temp != NULL) {
        if (temp->data == 0) zerocnt++;
        else if (temp->data == 1) onecnt++;
        else if (temp->data == 2) twocnt++;

        temp = temp->next;
    }

    temp = head;
    while (temp != NULL) {
        if (zerocnt != 0) {
            temp->data = 0;
            zerocnt--;
        } else if (onecnt != 0) {
            temp->data = 1;
            onecnt--;
        } else {
            temp->data = 2;
            twocnt--;
        }
        temp = temp->next;
    }
}

// Approach2: When data replacemet is not allowed!

void SortList2(Node* &head){
    Node* zerohead = new Node(-1);
    Node* zeroTail = zerohead;
    Node* onehead = new Node(-1);
    Node* oneTail = onehead;
    Node* twohead = new Node(-1);
    Node* twoTail = twohead;

    Node* curr = head;

    // Create separate list 0s, 1s and 2s.
    while (curr != NULL)
    {
        int val = curr->data;

        if(val == 0){
            insertToLast(zeroTail,val);
        }
        else if(val == 1){
            insertToLast(oneTail,val);
        }
        else if(val == 2){
            insertToLast(twoTail,val);
        }

        curr = curr->next;
    }

    // Merge 3 Linked List.
    
    // if 1's List is not empty.
    if(onehead->next != NULL){
        zeroTail->next = onehead->next;
    }
    // if 1's list is empty
    else{
        zeroTail->next = twohead->next;
    }
    
    oneTail->next = twohead->next;
    twoTail->next = NULL;

    // setup head
    head = zerohead->next;

    // delete dummy nodes
    // delete zerohead;
    // delete onehead;
    // delete twohead;

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
    Node* head = new Node(2);
    Node* tail = head;

    insertToLast(tail,0);
    insertToLast(tail,0);
    insertToLast(tail,2);
    insertToLast(tail,1);
    insertToLast(tail,1);
    insertToLast(tail,0);
    insertToLast(tail,2);

    cout<<"Before: ";
    print(head);

    SortList2(head);    
    cout<<"After: ";
    print(head);
}

*/



// Q.> Merge two sorted Link list?


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

Node* solve(Node* &first,Node* &second){

    // if only one element is present in first list
    if(first->next == NULL){
        first->next = second;
        return first;
    }


    Node* curr1 = first;
    Node* next1 = curr1->next;
    Node* curr2 = second;
    Node* next2 = curr2->next;

    while (next1 != NULL && curr2 != NULL)
    {
        if((curr2->data >= curr1->data) && (curr2->data <= next1->data)){
            curr1->next = curr2;
            next2 = curr2->next;
            curr2->next = next1;

            // Update Pointer
            curr1 = curr2;
            curr2 = next2;
        }
        else{
            // curr1 and next1 ko aage badhana padega
            curr1 = next1;
            next1 = next1->next;

            if(next1 == NULL){
                curr1->next = curr2;
                return first;
            }
        }
    }
    return first;
}

Node* sortTwoLists(Node* &first,Node* &second){

    if(first==NULL){
        return second;
    }
    if(second==NULL){
        return first;
    }
    if(first->data <= second->data){
        return solve(first,second);
    }
    else{
        return solve(second,first);
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


int main() {
    // Creating first sorted linked list
    Node* first = new Node(1);
    Node* tail1 = first;
    insertToLast(tail1, 3);
    insertToLast(tail1, 5);

    // Creating second sorted linked list
    Node* second = new Node(2);
    Node* tail2 = second;
    insertToLast(tail2, 4);
    insertToLast(tail2, 6);

    // Merging the lists
    Node* ans = sortTwoLists(first, second);
    print(ans);

}


*/


