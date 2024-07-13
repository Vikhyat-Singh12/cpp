#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v = {10,15,20,25,24};

    // for making itterator

    // vector<int>::iterator it = v.begin();
                //or
    auto it = v.begin();                  //"auto" keyword is used to deduce datatype automatically

    cout<<*it<<endl;
    it++;
    cout<<*it<<endl;
    it--; 
    cout<<*(it+3)<<endl;
}