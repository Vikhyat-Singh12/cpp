#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,count=0;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        int arr[4];
        for(int j = 0;j<4;j++){
            cin>>arr[j];
            if(arr[j]&1){
                count++;
            }
        }
        if(count>0){
            cout<<"OUT"<<endl;
        }
        else cout<<"IN"<<endl;
        count=0;
    }
}