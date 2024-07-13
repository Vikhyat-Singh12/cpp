#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int rev = 0;
    int b = n;
    while (b>0)
    {
        int r = b%10;
        rev = rev*10 + r;
        b /= 10;
    }
    if(n == rev){
        cout<<"Palindrome!"<<endl;
    }
    else{
        cout<<"Nope!"<<endl;
    }

}
