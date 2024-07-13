#include<iostream>
using namespace std;


/*
int main(){
    int i = 5;

    int &j = i;                 // Creating refrence varable.

    // Here i & j denoting the same value and address;
    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    j++;
    cout<<i<<endl;
    cout<<j<<endl;
    cout<<&i<<endl;
    cout<<&j<<endl;

}
*/

/*

void update1(int n){
    n++;
}
void update2(int &n){                     //here value in main is updated because it act as reference variable.
    n++;
}

int main(){
    int n = 5;
    cout<<"Before: "<<n<<endl;
    update1(n);
    cout<<"After 1st update: "<<n<<endl;
    update2(n);
    cout<<"After 2nd update: "<<n<<endl;
} 
*/

/*
int main(){
    char ch = 'q';
    cout<<sizeof(ch)<<endl;

    char *c = &ch;
    cout<<sizeof(c)<<endl;
}
*/


                                            // Dynamic memory allocaton.

int getSum(int *arr,int n){
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
    
}


int main(){
    int n;
    cin>>n;
    // Variable size array.
    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Answer is : "<<getSum(arr,n)<<endl;
    
}


