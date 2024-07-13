#include<iostream>
#include<map>
using namespace std;

/*
You can think of these as special array in which the indices(keys) of elements
can be negative or very big or even strings!. These are like python-dictionaries.
(In Java same behaviour is shown by TreeMap).

map<Key_datatypes,value_datatype> m;
map<string,int>m;                                //defines a map in which the keys of elements are strings

m[key] --> give the value assigned with this key
m.clear()  --> Clear a map.
m.count(key) 
m.find(key) 
m.erase(key)

To transverse through the map we need to make an itterator
EXAMPLE --->

map<string,double> m;


*/

// int main(){
//     map<string,int>m = {{"hello",50},{"world",12}};

//     cout<<m["hello"]<<endl;
//     cout<<m["world"]<<endl;
// }



// Q.> Registration System

int main(){
    map<string,int> freq;

    int n;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin>>s;

        if(freq[s] == 0) cout<<"OK\n";

        else{
            cout<<s<<freq[s]<<"\n";
        }
        freq[s]++;
    }
    
}
