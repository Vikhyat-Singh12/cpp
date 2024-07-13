#include<iostream>
#include<math.h>
using namespace std;


// Sieve of eratothesis a modified way to cnt the prime number?


/*

                                // Galat hai mera.
int main(){
    int n;
    cin>>n;

    int cnt = 0;
    int prime[n];

    for (int  i = 0; i < n; i++)
    {
        if(prime[i]) cnt++;

        for (int j = 2*i; j < n; j++)
        {
            prime[j] = 0;
        }
        
    }
    cout<<cnt<<endl;

}
*/



// GCD/HCF 

int gcd(int a,int b){
    if(a==0)
    return b;

    if(b==0)
    return a;

    while (a != b)
    {
        if(a>b) a = a-b;
        else b = b-a;
    }
    return a;
    
}

int main(){
    int a,b;
    cout<<"Enter the valuses of a & b: ";
    cin>>a>>b;

    int ans = gcd(a,b);
    cout<<"The GCD of "<<a<<" & "<<b<<" is: "<<ans<<endl;

}