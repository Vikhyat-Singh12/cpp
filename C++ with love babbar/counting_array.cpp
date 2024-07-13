#include<iostream>
#include<math.h>
using namespace std;

// Q1.> Write a programe to count the frequency the repeated element?
/*
int main(){
    int n;
    cin>>n;
    int arr[n];
    int count_arr[INT16_MAX] = {0};
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        count_arr[arr[i]]++;
    }

    for (int i = 0; i < INT16_MAX; i++)
    {
        if(count_arr[i]!=0){
            cout<<i<<"  ---> "<<count_arr[i]<<endl;
        }
    }

}
*/



// Q2.>Write a programe to find the most repeated number in the array?

int main(){
    int n;
    cin>>n;
    int arr[n];
    int count_arr[INT16_MAX] = {0};
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        count_arr[arr[i]]++;
    }

    for (int i = 0; i < INT16_MAX; i++)
    {
        if(count_arr[i]!=0){
            cout<<i<<"  ---> "<<count_arr[i]<<endl;
        }
    }
    
    int max_freq = 0,word=count_arr[0];
    for (int i = 0; i < INT16_MAX; i++)
    {
        if(count_arr[i]>max_freq){
            max_freq = count_arr[i];
            word = i;
        }
    }
    
    cout<<"Maximum Repeated element is "<<word<<" --> "<<max_freq<<" times"; 

}
