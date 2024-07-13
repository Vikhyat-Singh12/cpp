#include <iostream>
#include <string>
#include <math.h>
using namespace std;

// Q1.> Convert a number into bits.

/*
int main(){
    int n;
    cin>>n;
    int a = 0,i=0;
    while (n>0)
    {
        int r = n%2 ;
        a = r*pow(10,i) +a;
        n/=2;
        i++;
    }
    cout<<a<<endl;

}
*/

//  Q2.> We need to find bit at a position?
/*
int main(){
    int x,a;
    cin>>x>>a;

    if(a & (1<<x) != 0) cout<<1<<endl;
    else cout<<0<<endl;

}
*/

// Q3.> We need to set a bit at a position?

/*
int main()
{
    int x, a;
    cin >> x >> a;

    cout << (x | (1<<a)) << endl;
}
*/


// Q4.>Write a code to clear bit at position ?
/*
int main(){
    int x,a;
    cin>>x>>a;

    int r = (1<<a);

    cout<<(x & (~r))<<endl;
}
*/


// Q5.>Write a code to update a bit at the position.

/*
int main(){
    int x,a,b;
    cin>>x>>a>>b;

    int r = (b<<a);
    int s = (x & (~r));

    cout<<(r | s)<<endl;
}

*/