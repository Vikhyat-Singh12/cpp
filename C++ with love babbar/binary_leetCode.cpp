#include <iostream>
#include <math.h>
using namespace std;

// Q1.> Write a programe to reverse a number?

/*
int main(){
    int n;
    cin>>n;
    int ans = 0;

    while (n>0)
    {
        if (ans>INT32_MAX/10 || ans<INT32_MIN/10)
        {
            ans = 0;
            break;
        }

        int r = n%10;
        ans = ans*10 + r;
        n/=10;
    }
    cout<<ans;

}
*/

// Q2.> Give the compliment of an number?

/*
int main()
{
    int n;
    cin >> n;
    int mask = 0, m = n;
    if (n == 0)
    {
        cout << 1;
    }

    else
    {
        while (m > 0)
        {
            mask = (mask << 1) | 1;
            m = m >> 1;
        }
        int ans = (~n) & mask;
        cout << ans;
    }
}
*/

// Q3.>Write a programe to find wheather a given number is power of 2?

/*
int main(){
    int n;
    cin>>n;
    int j=0,m=n,ans=0;
    while (n>0)
    {
        j++;
        n/=2;
    }
    int x =(1<<(j-1));
    cout<<x<<endl;
    if(x==m) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
*/

                                  // OR
