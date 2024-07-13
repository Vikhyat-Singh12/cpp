#include<iostream>
#include<cmath>
using namespace std;

/*
int main(){
    int n;
    cin>>n;

    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int ans = -10000;
    for (int i = 0; i < n-1; i++)
    {
        int prod = arr[i];
        for (int j = i+1; j < n; j++)
        {
            int prod = prod*arr[j];
            if(prod>ans){
                ans = prod;
            }
            cout<<prod<<" ";
        }
        
    }
    
    cout<<ans;
    
    
    

}
*/

/*

int main() {
    string str;
    cin >> str;

    int k = 0;
    int arr[k];
    int value = 0;
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ',') {
            arr[k++] = value;
            value = 0;
        } else {
            // Convert character to integer and accumulate it
            value = value * 10 + (str[i] - '0');
        }
    }
    // Don't forget to store the last value
    arr[k++] = value;

    for (int i = 0; i < k; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}


*/



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

void insertAtHead(Node* &head,int d){
    Node* temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}
int main(){
    Node* node1 = new Node(10);
    Node* head = node1;

    print(head);
    cout<<getLength(head)<<endl;

    insertAtHead(head,11);
    print(head);
    insertAtHead(head,12);
    print(head);

    cout<<getLength(head)<<endl;
}