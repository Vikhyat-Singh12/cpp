#include <iostream>
using namespace std;

/*
int main(){
    int a = 4;
    int b = 6;

    cout<<" a&b "<<(a&b)<<endl;
    cout<<" a|b "<<(a|b)<<endl;
    cout<<" a^b "<<(a^b)<<endl;
    cout<<" ~a "<<(~a)<<endl;


    cout<<(17>>1)<<endl;        //right shift
    cout<<(17>>2)<<endl;        //right shift
    cout<<(19<<1)<<endl;        //left shift
    cout<<(21<<2)<<endl;        //left shift
}



//  Inc/Dec operator

// i++ --> post increment operator
// ++i --> pre increment operator
// i-- --> post decrement operator
// --i --> pre decrement operator



int main(){
    int i = 7;

    cout<<(++i)<<endl;
    //8
    cout<<(i++)<<endl;
    //8 , i = 9
    cout<<(--i)<<endl;
    //8 , i = 8
    cout<<(i--)<<endl;
    //8 , i =7
}

int main(){
    int a , b = 1;
    a = 10;
    if (++a){

        cout<<b;}

    else{
        cout<<++b;}


}


int main(){
    int a = 1;
    int b = 2;
    if (a-- > 0 && ++b > 2)
    {
        cout<<"Stage1 - Inside If "<<endl;
    }
    else{
        cout<<"Stage2 - Inside Else "<<endl;
    }

    cout << a << " "<<b << endl;

}


int main()
{
    int a = 1;
    int b = 2;
    if (a-- > 0 || ++b > 2)
    {
        cout << "Stage1 - Inside If " << endl;
    }
    else
    {
        cout << "Stage2 - Inside Else " << endl;
    }

    cout << a << " " << b << endl;
}


int main(){
    int number = 3;
    cout<<(25 * (++number));
}


int main(){
    int a = 1;
    int b = a++;
    int c = ++a;
    cout << b<<endl;;
    cout << c << endl;

}

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin>>n;

    cout<<"printing count form 1 to "<<n<<endl;

    for (int i = 1; i <= n; i++)
    {
        cout<< i<<endl;
    }

}

int main(){
for (int a = 0 , b = 1; a <= 0 && b>= 1; a--,b--)
{
    cout<<a<<" "<<b<<endl;
}

}

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int sum = 0;
    for (int i = 1; i <= n; i++){

        // sum = sum + i;
        sum += i;
    }

    cout<<"The sum of "<<n<<"th value is: "<<sum<<endl;

}

int main(){
    int n;
    cout<<"Enter a number for fibonacci series: ";
    cin>>n;

    int a = 0;
    int b = 1;

    cout<<a<<" "<<b<<" ";
    for (int i = 1; i <= n; i++)
    {
        int nextnumber = a+b;
        cout<<nextnumber<<" ";

        a = b;
        b = nextnumber;
    }

}

int main()
{
    int n;
    cout << "Enter a number to find primeno.: ";
    cin >> n;

    bool isPrime = 1;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    if (isPrime == 0)
    {
        cout<<n<<" is not a Prime Number."<<endl;
    }
    else{
        cout<<n<<" is a Prime Number."<<endl;
    }
    
}

// Now its time for some questions

int main(){
    for (int i = 0; i <=5; i++)
    {
        cout<<i<<" ";
        i++;
    }
    
}
int main(){
    for (int i = 0; i <=5; i--)
    {
        cout<<i<<" ";
        i++;
    }
    
}

*/

int main(){
    for (int i = 0; i <= 15; i+=2)
    {
        cout<< i << " ";

        if (i&1)
        {
            continue;
        }
        i++;
    }
    
}

/*
 int main(){
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= 5; j++)
        {
            cout<< i << " " << j << endl;

        }
        
    }
    
 }

int main(){
    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j <= 5; j++)
        {
            if (i+j == 5)
            {
                break;
            }
            cout<<i<<" "<<j<<endl;
        }
        
    }
    
}
 
int main(){

    int a = 3;
    cout<< a << endl;

    if (true)
    {
        int b = 5;
        cout<<b<<endl;
    }
    int b = 1;
    cout<<b<<endl; 
    // int b = 2;         Can't declare again the same variable in the same block
    // cout<<b<<endl;   
    if (true)
    {
        if (true)
        {
            if (true)
            {
                if (true)
                {
                    cout<<b<<endl;
                }
                
            }
            
        }
        
    }
    

}

// Given an integer number n, return the difference between teh product of its digits and the sum of its digits.
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int prod = 1;
    int sum = 0;
    while (n!=0)
    {
        int digit = n%10;
        prod = prod*digit;
        sum = sum + digit;

        n = n/10;
    }

    int ans = prod - sum;

    cout<<"The difference of product and sum is: "<<ans<<endl;
    
}

// To find the number of 1 bits in the given number.
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int count = 0;
    while (n!=0)
    {
        if (n&1)
        {
            count++;
        }
        n = n>>1;

    }
    cout<<"The number of 1 bit is: "<<count;
    
}



*/

