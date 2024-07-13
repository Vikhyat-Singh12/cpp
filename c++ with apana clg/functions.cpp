#include <iostream>
#include <math.h>
using namespace std;

// Functions

/*
void print(int num){
    cout<<num<<endl;
}

int add(int a,int b){
    print(a);
    print(b);
    int sum = a + b;
    return sum;
}


int main(){
    int a,b;
    cin>>a>>b;

    cout<<add(a,b)<<endl;
}
*/

// write the code for finding the factorial of user input by user upto 12.
/*
int main(){
    int n;
    cin>>n;

    int fact = 1;
    for (int i = n; i >= 1; i--)
    {
        fact = fact*i;
    }
    cout<<fact;
}
*/

// by function method;

/*
int fact(int n){
    int facctorial = 1;
    for (int i = 2; i <= n; i++)
    {
        facctorial *= i;

    }
    return facctorial;

}

int main(){
    int n;
    cin>>n;

    int factorial = fact(n);
    cout<<factorial<<endl;
}
*/

// Print all the prime number between 2 given number.

/*
bool isPrime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        if (isPrime(i))
        {
            cout << i << endl;
        }
    }
}
*/

// Print the Fibenacci Sequence

/*
void fib(int n){
    int a = 0;
    int b = 1;
    int nextTerm;

    for (int i = 1; i <= n; i++)
    {
        cout<<a<<endl;

        nextTerm = a + b;
        a=b;
        b=nextTerm;
    }

}

int main(){
    int n;
    cin>>n;

    fib(n);
}
*/

// Calculate the nCr;

/*
int fact(int n){
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
int main(){
    int n,r;
    cin>>n>>r;

    int ans = fact(n)/(fact(r)*fact(n-r));
    cout<<ans;
}
*/

//  Printing the pascals triangle.

/*
int fact(int n){
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            int ans = fact(i) / (fact(j) * fact(i-j));
            cout << ans<<" ";
        }
        cout<<endl;
    }
}
*/