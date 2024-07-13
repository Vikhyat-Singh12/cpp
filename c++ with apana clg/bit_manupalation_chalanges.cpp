#include <iostream>
#include <math.h>
using namespace std;

// Q1.> Write a programme to check if a given number is a power of 2?

/*
int main()
{
   int a,n;
   cin>>n;
   a=n;
   int count = 1;
  while (n!=1){
    if(n%2==0) {
        count *= 2;
        n /= 2;
    }
    else break;
   }
   if(count == a) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
    return 0;
}
*/

// OR

/*
bool powerof2(int n){
    return (n && !(n&(n-1)));
}
//
int main(){
    int n;
    cin>>n;
    cout<<powerof2(n)<<endl;
}
*/

// OR

/*
int main(){
    int n;
    cin>>n;

    int a = n,i=0;

    while (a>0)
    {
        i++;
        a/=2;
    }
    // cout<<i<<endl;
    int r = (1<<(i-1));
    cout<<r<<endl;
    if(r==n) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
*/

// Q2.> Write a programe to count the number of ones in binary representation of a number?
/*
int main(){
    int n,count = 0;
    cin>>n;

    while(n>0){
        int r = n%2;
        if (r&1)
        {
            count++;
        }
        n/=2;
    }
    cout<<count<<endl;
}
*/

// Q3.> Write a programe to genrate all possible subsets of a set?

/*
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < (1 << n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                cout << arr[j] << " ";
            }
        }
        cout << endl;
    }
}
*/
// Samajh nahi aaya hai Q3. wala.

// Q4.> Write a programme to find a uniqe number in an array where all the number except one , are present twice?

/*
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int present_uniqe = 0;

    for (int i = 0; i < n; i++)
    {
        present_uniqe = present_uniqe^arr[i];
    }

    cout<<present_uniqe<<endl;
}
*/

// Q4.> Write a programme to find Two uniqe number in an array where all the number except two , are present twice?

int setBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}
void unique(int arr[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum ^ arr[i];
    }
    int tempxor = xorsum;
    int setbit = 0, pos = 0;
    while (setbit != 1)
    {
        setbit = xorsum & 1;
        pos++;
        xorsum = xorsum >> 1;
    }
    int newxor = 0;
    for (int i = 0; i < n; i++)
    {
        if (setBit(arr[i], pos - 1))
        {
            newxor = newxor ^ arr[i];
        }
    }

    cout << newxor << endl;
    cout << (tempxor ^ newxor) << endl;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    unique(arr, n);
}