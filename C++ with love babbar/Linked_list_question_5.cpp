#include<iostream>
#include<vector>
using namespace std;

// Q.> Write a programe to check whether it is Palindrome Linked List or Not?

/*
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


void insertToLast(Node* &tail,int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}


// Approach 1: ----------->
bool checkPalindrome(vector<int>arr){
    int n = arr.size();
    int s = 0;
    int e = n-1;

    while (s<=e)
    {
        if(arr[s] != arr[e]){
            return 0;
        }
        s++;
        e--;
    }
    return 1;
}

bool ispalindrome(Node* head){
    vector<int>arr;

    Node* temp = head;
    while (temp != NULL)
    {
        arr.push_back(temp->data);
        temp = temp->next;
    }
    return checkPalindrome(arr);

}

// Aproach2: ----------------->

Node* getMid(Node* head){
    Node* slow = head;
    Node* fast = head->next;

    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

Node* reverse(Node* head){
    Node* curr = head;
    Node* prev  = NULL;
    Node* next  = NULL;

    while (curr!= NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

bool isPalindrome2(Node* &head){
    if(head==NULL || head->next == NULL){
        return true;
    }

    // step1: Find Middle
    Node* middle = getMid(head);

    // step2: Reverse List after middle 
    Node* temp = middle->next;
    middle->next = reverse(temp);

    //step3: Compare Both halves
    Node* head1 = head;
    Node* head2 = middle->next;

    while (head2 != NULL)
    {
        if(head1->data != head2->data){
            return false;
        }
        head1 =head1->next;
        head2 = head2->next;
    }

    // step4: repeat step2
    temp = middle->next;
    middle->next = reverse(temp);

    return true;
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
    Node* head = new Node(1);
    Node* tail = head;
    insertToLast(tail, 2);
    insertToLast(tail, 2);
    insertToLast(tail, 2);
    insertToLast(tail, 2);
    insertToLast(tail, 1);

    bool ans1 = ispalindrome(head);
    if(ans1) cout<<"Palindrome!"<<endl;
    else cout<<"Not Palindrome!"<<endl;

    bool ans2 = isPalindrome2(head);
    if(ans2) cout<<"Palindrome!"<<endl;
    else cout<<"Not Palindrome!"<<endl;

}

*/




// Q.> Write a Programe to add Two Linked List?
/*
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

Node* reverse(Node* head){
    Node* curr = head;
    Node* prev  = NULL;
    Node* next  = NULL;

    while (curr!= NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

Node* add(Node* &first,Node* &second){
    int carry = 0;
    Node* ansHead = NULL;
    Node* ansTail = NULL;

    while (first!= NULL && second!= NULL)
    {
        int sum = carry + first->data + second->data;
        int digit = sum%10;
       
        // create node and add answer Linked List
        insertToLast(ansHead,ansTail,digit);

        carry = sum/10;
        first = first->next;
        second = second->next;
    }

    while (first != NULL)
    {
        int sum = carry + first->data;
        int digit = sum%10;
       
        // create node and add answer Linked List
        insertToLast(ansHead,ansTail,digit);

        carry = sum/10;
        first = first->next;
    }

    while (second != NULL)
    {
        int sum = carry + second->data;
        int digit = sum%10;
       
        // create node and add answer Linked List
        insertToLast(ansHead,ansTail,digit);

        carry = sum/10;
        second = second->next;
    }
    
    while (carry != 0)
    {
        int sum = carry;
        int digit = sum%10;
       
        // create node and add answer Linked List
        insertToLast(ansHead,ansTail,digit);

        carry = sum/10;
    }
    
    return ansHead;
}

Node* addTwoLists(Node* &first,Node* &second){
    // step1: reverse input LL
    first = reverse(first);
    second = reverse(second);

    // step2: add 2 LL
    Node* ans = add(first,second);

    // step3: reverse(ans);
    ans = reverse(ans);
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
    Node* first = new Node(9);
    Node* tail1 = first;
    insertToLast(first,tail1,9);
    insertToLast(first,tail1,6);
    insertToLast(first,tail1,7);


    Node* second = new Node(9);
    Node* tail2 = second;
    insertToLast(second,tail2,9);
    insertToLast(second,tail2,5);
    insertToLast(second,tail2,3);

    Node* ans = addTwoLists(first,second);
    print(ans);
}
*/


// Q.> Write a progreame to Clone a Linked List with Random Pointer?


class Node{
    int data;
    Node* next;
    Node* random;

    Node(int d){
        this-> data = d;
        this->next = NULL;
    }
};



// Watch Lecture Number 52 again after learning map and many more...........................................