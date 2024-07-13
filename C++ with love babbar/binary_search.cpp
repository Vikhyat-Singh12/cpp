#include<iostream>
using namespace std;


// Q1.> Write a programe to sort an array?
/*
bool BinarySearch(int arr[],int n,int key){
    int start = 0,end = n-1,mid=(start+end)/2;
    while (start<=end)
    {
        if(arr[mid] == key)
            return true;
        else if(key>arr[mid])
            start = mid + 1;
        else
            end = mid - 1;

        mid = (start + end)/2;
    }
    return false;
    
}
int main(){
    int n,x;
    cin>>x>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    bool ans = BinarySearch(arr,n,x);
    if(ans){
        cout<<"Found!";
    }
    else cout<<"Not Found";
   
}

*/


// Q2.> write a programe to find First and Last Position of an Element in Sorted Array?

/*
int firstOcc(int arr[],int n,int key){
    int s = 0,e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while (s<=e)
    {
        if(arr[mid]==key){
            ans = mid;
            e = mid-1;
        }
        else if(key>arr[mid]) s = mid +1;
        else if(key<arr[mid]) e = mid -1;
        mid = s +  (e-s)/2;
    }

    return ans;    
}

int lastOcc(int arr[],int n,int key){
    int s = 0,e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while (s<=e)
    {
        if(arr[mid]==key){
            ans = mid;
            s = mid+1;
        }
        else if(key>arr[mid]) s = mid +1;
        else if(key<arr[mid]) e = mid -1;
        mid = s + (e-s)/2;
    }

    return ans;
    
}

int main(){
    int n,x;
    cin>>x>>n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }


    cout<<"First Occurence of "<<x<<" is at Index: "<<firstOcc(arr,n,x)<<endl;
    cout<<"Last Occurence of "<<x<<" is at Index: "<<lastOcc(arr,n,x)<<endl;

    delete []arr;    
}

*/



// Q.>Write a programe to count the occurence of element x?


                                    // This is by normal method.
/*
int main(){
   int n,x;
    cin>>x>>n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    } 
    int arr_infi[INT16_MAX] = {0};

    for (int i = 0; i < n; i++)
    {
        arr_infi[arr[i]]++;
    }
    for (int i = 0; i < INT16_MAX; i++)
    {
        if(i==x){
            cout<<i<<" --> "<<arr_infi[i]<<endl;
        }
    }
    
    
}
*/

                                // BY  Binary Search method
/*
int firstOcc(int arr[],int n,int key){
    int s = 0,e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while (s<=e)
    {
        if(arr[mid]==key){
            ans = mid;
            e = mid-1;
        }
        else if(key>arr[mid]) s = mid +1;
        else if(key<arr[mid]) e = mid -1;
        mid = s +  (e-s)/2;
    }

    return ans;    
}

int lastOcc(int arr[],int n,int key){
    int s = 0,e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while (s<=e)
    {
        if(arr[mid]==key){
            ans = mid;
            s = mid+1;
        }
        else if(key>arr[mid]) s = mid +1;
        else if(key<arr[mid]) e = mid -1;
        mid = s + (e-s)/2;
    }

    return ans;
    
}

int main(){
    int n,x;
    cin>>x>>n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int Occurence = lastOcc(arr,n,x) - firstOcc(arr,n,x) + 1;
    cout<<"Number of occurence of "<<x<<" is : "<<Occurence<<endl;

    delete []arr;    
}
*/



// Q.> Write a  code to find the peak Index in the mountain array ?

/*
int main(){
    int n;
    cin>>n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int s = 0,e = n-1;
    int mid = s + (e-s)/2;
    while(s<e){
        if(arr[mid]<arr[mid + 1]){
            s  = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }

    cout<<"Peak element in the arr is at Index: "<<e<<endl;


    delete []arr;
}
*/
















// Lecture number 14 & 15  is unfinished;