#include<iostream>
using namespace std;



// Q.> Write a programe for a merge sort Linked List?

class Node{
    public:
        int data;
        Node* next;

        Node(int d){
            this->data = d;
            this->next = NULL;
        }

        ~Node(){
            int val = this->data;
            while (next!=NULL)
            {
                delete next;
                next = NULL;
            }
            cout<<"Memory freed for the value "<<val<<endl;
        }
};


void insertToLast(Node* &head,Node* &tail,int d){
    Node* temp = new Node(d);

    // empty List
    if(head == NULL){
        head = temp;
        tail = temp;
        return;
    }
    else{
    tail->next = temp;
    tail = temp;
    }
}

Node* findMid(Node* &head){
    Node* slow = head;
    Node* fast  = head->next;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;    
}

Node* merge(Node* left,Node* right){

    if(left == NULL){
        return right;
    }
    if(right == NULL){
        return left;
    }

    Node* ans = new Node(-1);
    Node* temp = ans;

    // Merge two sorted Linked List.
    while (left != NULL  && right != NULL)
    {
        if(left->data < right->data){
            temp->next = left;
            temp = left;
            left = left->next;
        }
        else{
            temp->next = right;
            temp = right;
            right = right->next;
        }
    }

    while (left != NULL)
    {
        temp->next = left;
        temp = left;
        left = left->next;
    }
    while (right != NULL)
    {
        temp->next = right;
        temp = right;
        right = right->next;
    }
    
    ans = ans->next;
    return ans;
}

Node* mergeSort(Node* &head){
    // base case
    if(head==NULL || head->next == NULL){
        return head;
    }
    
    // break Linked List into 2 halvs, after finding mid
    Node* mid = findMid(head);

    Node* left = head;
    Node* right = mid->next;
    mid->next = NULL;

    // recursive calls
    left = mergeSort(left);
    right = mergeSort(right);

    // merge both left and right halves
    Node* result = merge(left,right);

    return result;
}



void print(Node* head){
    Node* temp = head;

    while (temp!= NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){

    // Adding element in first Linked List
    Node* head = new Node(9);
    Node* tail1 = head;
    insertToLast(head,tail1,9);
    insertToLast(head,tail1,6);
    insertToLast(head,tail1,7);
    insertToLast(head,tail1,5);
    insertToLast(head,tail1,15);
    insertToLast(head,tail1,12);
    insertToLast(head,tail1,28);
    insertToLast(head,tail1,1);
    insertToLast(head,tail1,6);

    Node* ans = mergeSort(head);
    print(ans);

}









//Homework question nahi kiya hu lecture number 53 ka baad me jarrur dekh lena...........................