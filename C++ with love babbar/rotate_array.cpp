#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//                 by Vector use.

// Q1.> Roatate an array?

/*
int main(){
    vector<int> v;
    int n,k;
    cin>>k;
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        int r ;
        cin>>r;
        v.push_back(r);
    }


    rotate(v.begin(),v.begin()+(k+1),v.end());
    
    for(int i:v){
        cout<<i<<" ";
    }

    
}
*/



// Nahi samajh me aaya hai

/*
bool check(vector<int>& nums){
    int count = 0;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        if(nums[i-1]>nums[i]){
            count++;
        }
    }
    if (nums[n-1]>nums[0])
    {
        count++;
    }
    return count<=1;
    
    
}

int main(){
    int n;
    vector<int> num;
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        int r ;
        cin>>r;
        num.push_back(r);
    }

    cout<<check(num);
}
*/


// Q3.> Add the two array?

