#include <iostream>
using namespace std;

// continue is used to skip the loop
// and break is used to break the loop
/*
int main(){
    int pocket_money = 3000;
    for (int i = 1; i <= 30; i++)
    {
        if (i%2==0)
        {
            continue;
        }
        if(pocket_money==0){
            break;
        }
        cout<<"Go out today! "<<i<<endl;
        cout<<pocket_money<<endl;
        pocket_money = pocket_money-300;


    }
    return 0;

}
*/

/*
int main(){
    for (int i = 0; i < 100; i++)
    {
       if(i%3==0){
        continue;
       }
       cout<<i<<endl;
    }

}
*/

// Finding out a wheater a number is number is Prime or not.
/*
int main(){
    int n;
    cout<<"Enter a number to check PrimeNumber: ";
    cin>>n;

    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            cout<<n<<" not PrimeNumber"<<endl;
            break;
        }
        cout<<n<<" PrimeNumber"<<endl;
        break;
    }


}
*/

// Smanjh nahi aaya hai.
// Print all prime number between A and B.

/*
int main()
{
    int a, b;
    cout << "Enter a number 'A': ";
    cin >> a;
    cout << "Enter a number 'B': ";
    cin >> b;

    for (int j = a; j <= b; j++)
    {
    int i;
        for (i = 2; i < j; i++)
        {
            if (j % i == 0)
            {
                break;
            }
        }
        if (i==j)
        {
            cout<<j<<endl;
        }
        
    }
}
*/
