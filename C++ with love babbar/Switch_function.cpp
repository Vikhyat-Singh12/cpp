#include <iostream>
#include <math.h>
using namespace std;

// Q1.> Write a programe to find the number notes of 100,50,20,10 reqired?

/*
int main()
{
    int n;
    cin >> n;

    int _100 = 0, _50 = 0, _20 = 0, _10 = 0,_1 = 0;

    switch (1)
    {
    case (1):
        _100 = n / 100;
        n %= 100;
        cout << "Number of 100 ruppee note = " << _100 << endl;
    case (2):
        _50 = n / 50;
        n %= 50;
        cout << "Number of 50 ruppee note = " << _50 << endl;
    case (3):
        _20 = n / 20;
        n %= 20;
        cout << "Number of 20 ruppee note = " << _20 << endl;
    case (4):
        _10 = n / 10;
        n %= 10;
        cout << "Number of 10 ruppee note = " << _10 << endl;
    case (5):
        _1 = n / 1;
        n %= 1;
        cout << "Number of 1 ruppee note = " << _1 << endl;
    }
}
*/

// Q2.> Write a programe to find the given number is Even od Odd?

/*
bool isEven(int a){
    if(a&1) return 0;
    else return 1;
}

int main(){
    int n;
    cin>>n;

    if(isEven(n)==1) cout<<"Even"<<endl;
    else cout<<"Odd"<<endl;
}
*/


// Q3.>Write a programe to print n fibonnaci series using function?
/*
int fibonnaci(int n){
    int a = 0;
    int b =1;
    cout<<a<<" "<<b<<" ";
    for (int i = 1; i < n-1; i++)
    {
        int ans = a+b;
        cout<<ans<<" ";
        a = b;
        b = ans;
    }
    
}

int main(){
    int n;
    cin >> n;

    fibonnaci(n);
}
*/


// Q4.> Homework Question?

/*
int update(int a){
    a *= a;
    return a;
}

int main(){
    int a = 15;
    update(a);
    cout<<a<<endl;
}
*/


int main(){
    int a,b,c,d;

    int max = ((a>b)?((a>c)?(a>d)?a:d):((b>c)?(b>d)?b:(c>d)?c:d));
}