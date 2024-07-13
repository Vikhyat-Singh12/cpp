// TOPIC : vector

// NOTES:
// 1. vector is a sequence container and also known as Dynamic Array or Array List.
// 2. Its size can grow and sink dynamically , and no need to provide size at complie time.

// ELEMENT ACCESS
// at(), [], front(), back(), data()

// MODIFIRES:
// insert(), emplace(), push_back(), emplace_back(), pop_back(), resize(), erase(), clear()

#include<iostream>
#include<vector>
using namespace std;

int main(){

    // Declarations
    vector<int> arr1;
    vector<int> arr2 (5,20);
    vector<int> arr3 = {1,2,3,4,5};     // intializer list
    vector<int> arr4 {1,2,3,4,5};

    // Accessing Element
    arr2[3] = 10;
    arr2.at(3) = 10;

    for(auto i:arr2){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<arr2.size()<<" "<<arr2.capacity()<<endl;
    arr2.push_back(20);
    for(auto i:arr2){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<arr2.size()<<" "<<arr2.capacity()<<endl;
    
}

