#include <iostream>
using namespace std;

// If else loop.

int main(){

    /* int n;
     cin>>n;
     cout<<"The value of n is:" << n <<endl;

     if (n>0)
     {
         cout<<"N is positive"<<endl;
     }
     else{
         cout<<"N is Negative"<<endl;
     }


   int a,b;
   cin>>a>>b;
   cout<<"A and B are : "<<a<<" & "<<b<<endl;

   int c;
   c = cin.get();
   cout<< "Value of a is : "<< c <<endl;


    int a ,b;
    cin>>a >>b;

    if (a>b)
    {
     cout<<"A is greater"<<endl;

    }
    else{
     cout<<"B is greater"<<endl;

    }



    char ch;
    cout << "Enter your data : ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
    {
        cout << "This is UPPER CASE";
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        cout << "This is lower case";
        
    }
    else if (ch >= '0' && ch <= '9')
    {
        cout << "This is numeric";
    }
*/

    int a = 2;
    int b = a + 1;
    if ((a = 3) == b)
    {

        cout << a << endl;
    }
    else
    {
        cout << a + 1;
    }




}


/*
// While Loop.
int main()
{
    int n;
    cin>>n;

    int i = 0;
    while (i<=n){
        cout<<i<<" ";
        i = i+1;
    }
    */

    // Sum of first n nataural number

    /*
     int n;
    cout<<"Enter the number: ";
    cin>>n;

    int i = 0;
    int sum = 0;

    while (i<=n)
    {
        sum = sum+i;
        i = i+1;

    }
    cout<<"The sum of first "<<n<<" natural number: "<<sum<<endl;
    */

    // The sum of all even natural upto n.

    /*
        int n;
        cout<<"Enter a number : ";
        cin>>n;

        int a =0;
        int sum = 0;

        while (a%2==0 && a<=n)
        {
            sum = sum + a;
            a = a+1;

        }
        cout<<"The sum is: "<<sum<<endl;

    */

    //  Farenheit to celcious table

    /*
    int n;
    cout<<"Enter the temp in farnheit: ";
    cin>>n;

    float a,c;

    a = (n-32);
    c= (a*5)/9;

    cout<<"The value in Celcious: "<<c<<endl;

    */

    // Find the number wheater it is prime or not?

    /*
    int n;
    cin>>n;

    int i = 2;
    while (i<n)
    {
        if (n%i == 0)
        {
            cout<<"Not Prime"<<endl;
        }
        else{
            cout<<"Prime"<<endl;
        }

        i= i+1;

    }

    */

    // Pattern

    // Draw this pattern
    /*
    ****
    ****
    ****
    ****
    */
/*
    int n, i, j;

    cout << "Enter the number for star pattern:";
    cin >> n;
    i = 0;

    while (n > i)
    {
        int j = 0;
        while (n > j)
        {
            cout << "*";
            j = j + 1;
        }
        i = i + 1;
        cout << endl;
    }
}
*/