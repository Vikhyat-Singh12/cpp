#include<iostream>
using namespace std;

/*
#include<queue>
int main(){
    // max heap
    priority_queue<int> maxi;

    // min - heap
    priority_queue<int,vector<int>,greater<int>> mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);
    maxi.push(5);

    int r = maxi.size();

    for(int i = 0; i<r;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;

    cout<<"Khali hai kya ? --> "<<maxi.empty()<<endl;
}
*/


                            //SET
/*
#include<set>

int main(){
    set <int> s;

// Since i get multiple input of same number but still it will give only single output of repeated element because set has alwways unique element as its definition says.
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(6);
    s.insert(0);
    s.insert(0);
    s.insert(0);

    for(int i : s){
        cout<<i<<" ";
    }
    cout<<endl;


    set<int>::iterator it = s.begin();             //this whole sentence is written to delete the desired element.
    it++;

    s.erase(it);
    for(int i: s){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"5 is present or not --> "<<s.count(5)<<endl;                //it will give 1 if present else give 0 as output.
}
*/

/*
#include<map>

int main(){
    map<int,string> m;

    //Types to insert 

    m[1] = "Vikhyat";
    m[5] = "Singh";
    m[3] = "Pro";

    m.insert({4,"Legendary"});

    cout<<"Before Erase --> "<<endl;
    // It will print in sorted order.
    for(auto i :m){
        cout<<i.first<<" "<<i.second<<endl;             // here, i.first refer to key and i.second refer to value.
    }
    cout<<endl;

    cout<<"Finding 5 --> "<<m.count(5)<<endl;

    m.erase(5);
    cout<<"After erase --> "<<endl;
    for(auto i :m){
        cout<<i.first<<" "<<i.second<<endl;             // here, i.first refer to key and i.second refer to value.
    }
}
*/



                                    //Algorithm

#include<algorithm>
#include<vector>

int main(){
    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout<<"Finding 6 --> "<<binary_search(v.begin(),v.end(),6)<<endl;

    cout<<"Lower bound --> "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"Upper bound --> "<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;

    int a = 3;
    int b = 5;

    cout<<"Max --> "<<max(a,b)<<endl;
    cout<<"Min --> "<<min(a,b)<<endl;

    swap(a,b);
    cout<<endl<<"a --> "<<a<<endl;
    cout<<endl<<"b --> "<<b<<endl;

    string abcd = "abcd";
    reverse(abcd.begin(),abcd.end());
    cout<<"String --> "<<abcd<<endl;

    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"After rotate -->"<<endl;

    for (int i :v)
    {
        cout<<i<<" ";
    }
    
}

