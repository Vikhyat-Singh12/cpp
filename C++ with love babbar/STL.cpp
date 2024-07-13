#include<iostream>
using namespace std;


                            // ARRAY

/*
int main(){

#include<array>

    array<int,4> a = {1,2,3,4};                                   //Making an array using array

    int Capacity = a.Capacity();                                  // here, a.capacity() determine the size of an array
    for (int i = 0; i < Capacity; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    cout<<"Element at 2nd Index -> "<<a.at(2)<<endl;             //here, a.at(2) will give the output of element at index 2.
    cout<<"Empty or not -> "<<a.empty()<<endl;                   //here, a.empty() will return 1 if the array is empty else 0.
    cout<<"First Element -> "<<a.front()<<endl;                  //here, a.front() will print the first element of an array.
    cout<<"Last Element -> "<<a.back()<<endl;                    //here, a.back() will print the last element of an array.
    
}
*/


                            // VECTOR
/*

#include<vector>

int main(){
    vector<int> v;                                                 // This is how vector are initiated
    cout<<"Capacity -> "<<v.capacity()<<endl;

    v.push_back(1);                                                // here, v.push_back(1) will insert 1 in the vector at the 0th index.
    cout<<"Capacity -> "<<v.capacity()<<endl;
    
    v.push_back(2);                                                 // here, v.push_back(2) will insert 2 in the vector at the 1st index.
    cout<<"Capacity -> "<<v.capacity()<<endl;
    
    v.push_back(3);                                                  // here, v.push_back(3) will insert 3 in the vector at the 2nd index.
    cout<<"Capacity -> "<<v.capacity()<<endl;
    cout<<"Size -> "<<v.size()<<endl;                                //here, v.size() is used to find the size of a vector

    cout<<"Element at 2nd Index : "<<v.at(2)<<endl;                   //here, v.at(2) will give the output of element at index 2.

    cout<<"Front : "<<v.front()<<endl;                                //here, v.front() will print the first element of an array.
    cout<<"Back : "<<v.back()<<endl;                                 //here, v.back() will print the last element of an array.

    cout<<"Before pop-->"<<endl;
    for (int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    v.pop_back();                                                   //here, v.pop_back() will remove the last element of the vector

    cout<<"After pop-->"<<endl;
    for (int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    vector<int> a(5,1);                                              //here, a vector named "a" is made of size 5 and all the element is initiated by 1.
    vector<int> last(a);                                             //here, A vector named "a" is copied in the vector name "last".

    cout<<"a-->"<<endl;
    for (int i:a)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"last-->"<<endl;
    for (int i:last)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    
}
*/


                       //DEQUE

/*

#include<deque>

int main(){
    deque<int> d;                                    //This is the way to define the "deque"

    d.push_back(1);                                  //here, d.push_back(1) is used to push the element "1" from the back .
    d.push_front(2);                                 //here, d.push_front(2) is used to push the element "2" from the front .
    d.push_front(3);                                 //here, d.push_front(3) is used to push the element "2" from the front .

    cout<<"Element -->";
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"print the 1st Index element --> "<<d.at(1)<<endl;          //d.at(1) is used to display the elemnt of 1st index.

    cout<<"Front : "<<d.front()<<endl;                                //here, d.front() will print the first element of an array.
    cout<<"Back : "<<d.back()<<endl;                                  //here, d.back() will print the last element of an array.
    cout<<"Empty or not -> "<<d.empty()<<endl;                        //here, d.empty() will return 1 if the array is empty else 0.

    cout<<"Before Erase --> "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);                                   //d.erase(starting,ending)   will erase the element between the range of it.           
    cout<<"After Erase --> "<<d.size()<<endl;


    d.pop_back();                                                     // here, d.pop_back() is used to remove the element from the back
    cout<<"After poping from the back -->"<<endl;

    cout<<"Element -->";
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;

    d.pop_front();                                                     // here, d.pop_front() is used to remove the element from the front
    cout<<"After poping from the front -->"<<endl;

    cout<<"Element -->";
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Empty or not -> "<<d.empty()<<endl;                          //here, d.empty() will return 1 if the array is empty else 0.
}
*/


                                            // LIST
/*

#include<list>

int main(){
    list<int> l;
    list<int> n(l);                              // This is used to copy the list in the in the new list.
    list<int> m(5,100);                          // This is used to initalise the list from 100 upto 5 index.

    l.push_back(1);
    l.push_front(2);

    for (int i :l)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    for (int i :n)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    for (int i :m)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    l.erase(l.begin());
    cout<<"After erase --> "<<endl;
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Size of list --> "<<l.size()<<endl;
}
*/


                                        // STACK

/*
#include<stack>

int main(){
    stack<string> s;
    s.push("Vikhyat");
    s.push("Singh");
    s.push("Pro");

    cout<<"Top Element --> "<<s.top()<<endl;

    s.pop();
    cout<<"Top Element --> "<<s.top()<<endl;

    cout<<"Size of stack --> "<<s.size()<<endl;
    cout<<"Empty or not  --> "<<s.empty()<<endl;
}
*/


                                    // QUEUE
/*
#include<queue>

int main(){
    queue<string> q;
    q.push("Vikhyat");
    q.push("Singh");
    q.push("Pro");
    q.push("Vikhyat");
    q.push("Singh");
    q.push("Pro");
    q.push("Vikhyat");
    q.push("Singh");
    q.push("Pro");
    q.push("Vikhyat");
    q.push("Singh");
    q.push("Pro");
    q.push("Vikhyat");
    q.push("Singh");
    q.push("Pro");

    cout<<"Size of the queue --> "<<q.size()<<endl;
    cout<<"First Element --> "<<q.front()<<endl;
    
    q.pop();
    cout<<"Size of the queue after pop --> "<<q.size()<<endl;
    cout<<"First Element --> "<<q.front()<<endl;

// This is how we can print al the element in the queue?
    int r = q.size();
    for (int i = 0; i < r; i++)
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<"Size of the queue after pop --> "<<q.size()<<endl;
    
}
*/


                                    // PRIORITY QUEUE
