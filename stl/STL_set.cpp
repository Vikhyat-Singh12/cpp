// Topic:  set<T>

// Syntax: set<T>objectName;

// 1. set is an Associative Container that contains a sorted set of unique object of type Key.
// 2. It is usually implemented using Red-Black Tree.
// 3. Insertion, Removal, Search have logirathmic complexity.
// 4. If  we want to store user defined data type in set then we will have to provide
//    compare function so that set can store them in sorted order.
// 5. We can pass the order of sorting while constructing set object.


// Bottom Line: 
// It store unique element and they are stored in sorted order (A/D)

/*
// Initialisstion
set<int> s;
set<string> s;

// Important Functions:
s.insert(x) --> insert the value x into set,do nothing if already exist.
s.erase(x)  --> erase the value x from set if present.
s.count(x)  --> return 0 if x is not in the set and 1 if x is in the set.
s.clear()   --> erase all the elements.
s.size()    --> return the current size of the set.
*/



#include<iostream>
#include<set>
#include<string>
using namespace std;

int main(){
    set<int> s  = {2,1,9,6,4,5,2,7};
    auto it = s.begin();                               //making iterator for accessing the element of the set.
    for (int i = 0; i < s.size(); i++)
    {
        cout<<*it<<endl;
        it++;
    }
    cout<<endl;


    // This is helpful because it doesn't required any iterator for transvering.
    for (int i : s)
    {
        cout<<i<<endl;
    }
    
}










