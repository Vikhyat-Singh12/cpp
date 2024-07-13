#include <iostream>
#include <math.h>
using namespace std;

// Sum of first n natural number.

/*
int main()
{
    int n;
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << sum;
}
*/

// Check pythagorian triplet.

/*
bool check(int x,int y,int z){
    int a = max(x,max(y,z));
    int b,c;

    if (a==x)
    {
        b=y;
        c=z;

    }
    else if (a==y)
    {
        b=x;
        c=z;
    }
    else{
        b=x;
        c=y;
    }
    if (a*a == b*b + c*c)
    {
        return true;
    }
    else{
        return false;
    }

}

int main(){
    int x,y,z;
    cin>>x>>y>>z;


    if (check(x,y,z))
    {
        cout<<"Pythagorean triplet";
    }
    else{
        cout<<"Not a Pythagorean triplet";
    }

}
*/

// Conversions;
/*
a> Binary to decimal.
b> Octal to decimal.
c> Hexadecimal to decimal.
d> Decimal to hexadecimal.
e> Decimal to binary.
f> Decimal to octal.
*/

// a> Binary to decimal.

/*
int main(){
    int n;
    cout<<"Enter the Binary number: ";
    cin>>n;

    int num = 0;
    int i = 0;
    while (n!=0)
    {
        int a = n%10;

        num = num + a*pow(2,i);
        i = i+1;
        n = n/10;

    }
    cout<<"The Decimal value is: "<<num;

}
*/

// b> Octal to decimal

/*
int main(){
    int n;
    cout<<"Enter the Octal number: ";
    cin>>n;

    int num = 0;
    int i = 0;
    while (n!=0)
    {
        int a = n%10;

        num = num + a*pow(8,i);
        i = i+1;
        n = n/10;

    }
    cout<<"The Decimal value is: "<<num;
}
*/

// c> Hexadecimal to decimal.

/*
int main()
{
    string n;
    cout << "Enter the HexaDecimal number: ";
    cin >> n;

    int ans=0;

    int s = n.size();
    for (int i = 0; i < s - 1; i++)
    {
        if (n[i]>= '0' && n[i]<='9')
        {
            ans += pow()
        }
    }
}
*/


// d> 



// Pura nahi hua hai n=baad me dekhana  hai lecture 16 hai.