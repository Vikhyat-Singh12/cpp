#include<iostream>
#include<stack>
using namespace std;

/*
int main(){

    // creation of stack
    stack<int> s;

    // push operation
    s.push(2);
    s.push(3);

    // pop
    s.pop();

    cout<<"Printing the top element: "<<s.top()<<endl;

    if (s.empty())
    {
        cout<<"Stack is empty."<<endl;
    }
    else{
        cout<<"Nope!"<<endl;
    }

    cout<<"Size of the stack: "<<s.size()<<endl;
    
}
*/


/*
class Stack{
    // Properties
    public:    
        int *arr;
        int top;
        int size;

    // behaviour
    Stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"Stack OverFlow"<<endl;
        }
    }

    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout<<"Stack UnderFlow"<<endl;
        }
    }

    int peek(){
        if(top>= 0){
            return arr[top];
        }
        else{
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }
};



int main(){
    Stack st(5);

    st.push(22);
    st.push(42);
    st.push(44);
    st.push(22);
    st.push(42);
    st.push(44);

    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;

    if(st.isEmpty()){
        cout<<"Stack is empty mere dost!"<<endl;
    }
    else{
        cout<<"Stack is not empty mere Dost!"<<endl;
    }
}
*/





// Q.> Write  a programe For Two Stack?

