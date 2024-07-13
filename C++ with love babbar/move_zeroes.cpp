#include<iostream>
using namespace std;

/*
int main(){
    int n,i=0;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int j = 0; j < n; j++)
    {
        if(arr[j]!=0){
            swap(arr[j],arr[i]);
            i++;
        }

    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
  
}
*/


int main(){
    int n;
    cin>>n;
    int arr[n];
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if(arr[i] == 0){
            cnt++;
        }
    }
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]!=0){
            arr[k] = arr[i];
            k++;
        }
    }
    for (int i = k; i < n; i++)
    {
        arr[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }    
}