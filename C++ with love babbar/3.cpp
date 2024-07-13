#include <iostream>
using namespace std;

// Print star pattern
/*
123
123
123

int main(){
    int n;
    cout<<"Enter a number for star pattern : ";
    cin>>n;

    int i = 1;
    while (i<=n)
    {
        int j = 1;
        while (j<=n)
        {
            cout<<j;
            j = j + 1;
        }
        i = i +1;
        cout<<endl;
    }

}
*/

// Print this star pattern
/*
321
321
321


int main()
{
    int n;
    cout << "Enter a number for star pattern : ";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << (n-j + 1);
            j = j + 1;
        }
        i = i + 1;
        cout << endl;
    }
}
*/

// Print this pattern
/*
123
456
789

int main()
{
    int n;
    cout << "Enter a number for this pattern : ";
    cin >> n;

    int count = 10;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j<=n)
        {
            cout<<count<<" ";
            count = count +1;
            j = j+1;

        }
        cout<<endl;
        i = i + 1;
    }
}
*/

// Print this star pattern

/*
*
**
***
****


int main(){
    int n;
    cout<<"Enter a number for star print: ";
    cin>>n;
    int i = 1;
    while (i<=n)
    {
        int j = 1;
        while (j<=i)
        {
            cout<<"*";
            j = j +1;
        }
        i = i +1;
        cout<<endl;
    }
}
*/

// Print this pattern

/*
1
22
333
4444
55555


int main(){
    int n;
    cout<<"Enter the number for this pattern: ";
    cin>>n;
    int i = 1;
    while (i<=n)
    {
        int j = 1;
        while (j<=i)
        {
            cout<<i;
            j = j+ 1;

        }
        i = i+1;
        cout<<endl;

    }

}
*/

// Print this pattern
/*
1
2 3
4 5 6
7 8 9 10


int main()
{
    int n;
    cout << "Enter a number for this pattern : ";
    cin >> n;

    int count = 1;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << count << " ";
            count = count + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}

*/

// Print this pattern

/*
1
21
321
4321


int main (){
    int n;
    cout<<"Enter the number for pattern: ";
    cin>>n;
    int i = 1;
    while (i<=n)
    {
        int j = 1;
        while (j<=i)
        {
            cout<<(i-j+1);
            j = j+1;
        }
        i = i + 1;
        cout<<endl;

    }


}
*/

// Print the pattern
/*
AAAAA
BBBBB
CCCCC
DDDDD
EEEEE


int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;

    int i = 1;
    while (i<=n)
    {
        int j = 1;
        while (j<=n)
        {
            char ch = 'A'+ i -1;
            cout<<ch;
            j = j+ 1;

        }
        i = i+ 1;
        cout<<endl;

    }

}
*/

// Print the pattern
/*
ABC
BCD
CDE


int main()
{
    int n;
    cout << "Enter the number :";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        // int count = 1;
        int j = 1;
        while (j <= n)
        {
            char ch = 'A' + j + i -2;
            cout << ch;
            // count = count + 1;
            j = j + 1;
        }
        i = i + 1;
        cout << endl;
    }
}
*/

// write the programe to print the patter.

/*
ABC
DEF
GHI

int main(){
    int n;
    cout<<"Enter the number for the pattern: ";
    cin>>n;
    int i =1;
    int count = 0;
    while (i<=n)
    {
        int j = 1;
        while (j<=n)
        {
            char ch = 'A'+count;
            cout<<ch;
            j = j+1;
            count = count +1;
        }
        i = i+1;
        cout<<endl;
    }

}
*/

// Write a programe to print this triangular pattern

/*
A
BB
CCC


int main(){
    int n;
    cout<<"Enter a number for the pattern: ";
    cin>>n;
    int i =1;
    while (i<=n)
    {
        int j = 1;
        while (j<=i)
        {
            char ch ='A'+i-1;
            cout<<ch;
            j = j+1;

        }
        i =i+1;
        cout<<endl;

    }

}
*/

// Write a programe to print this triangular pattern

/*
A
BC
DEF
GHIJ


int main(){
    int n;
    cout<<"Enter a number for the pattern: ";
    cin>>n;
    int i =1;
    int count = 0;

    while (i<=n)
    {
        int j = 1;
        while (j<=i)
        {
            char ch ='A'+count;
            cout<<ch;
            j = j+1;
            count = count + 1;

        }
        i =i+1;
        cout<<endl;

    }

}
*/

// Write a programe too print the following pattern.

/*
A
BC
CDE
DEFG
EFGHI

int main(){
    int n;
    cout<<"Enter a number for the pattern: ";
    cin>>n;
    int i =1;


    while (i<=n)
    {
        int j = 1;
        while (j<=i)
        {
            char ch ='A'+ i + j -2;
            cout<<ch;
            j = j+1;


        }
        i =i+1;
        cout<<endl;

    }

}

*/

// Write a programe to print the following pattern

/*
D
CD
BCD
ABCD



int main(){
    int n;
    cout<<"Enter a number for the pattern: ";
    cin>>n;

    int i = 1;
    while (i<=n)
    {
        int j = 1;
        while (j<=i)
        {
            char ch = 'A' + n - i + j -1;
            cout<<ch;
            j = j + 1;
        }
        i = i+1;
        cout<<endl;


    }

}
*/

// Write a programe to print the following pattern

/*
ABC
BCD
CDE



int main(){
    int n;
    cout<<"Enter a number for the pattern: ";
    cin>>n;

    int i = 1;
    while (i<=n)
    {
        int j = 1;
        while (j<=n)
        {
            char ch = 'A'+ i + j -2;
            cout<<ch;
            j = j + 1;
        }
        i = i+1;
        cout<<endl;


    }

}



*/
// Write a programe to print the following pattern

/*
    *
   **
  ***
 ****
*****



int main(){
    int n;
    cout<<"Enter a number for the pattern: ";
    cin>>n;

    int i = 1;
    while (i<=n)
    {
        int space = n-i;
        while (space){
            cout<<" ";
            space = space - 1;
        }
        int j =1;
        while (j<=i)
        {
            cout<<"*";
            j = j +1;
        }

        i = i+1;
        cout<<endl;

    }
}
*/

// Write a programe to print this pattern.
/*
*****
****
***
**
*


int main(){
    int n;
    cout<<"Enter the number to print the pattern:";
    cin>>n;

    int i = 1;
    while (i<=n)
    {
        int j = 1;
        while (j<=n-i+1)
        {
            cout<<"*";
            j = j + 1;
        }

        i = i + 1;
        cout<<endl;
    }

}
*/

// Write a programe to print this pattern.
/*
*****
 ****
  ***
   **
    *



int main(){
    int n;
    cout<<"Enter the number to print the pattern:";
    cin>>n;

    int i = 1;
    while (i<=n)
    {
        int space = i-1;
        while (space)
        {
            cout<<" ";
            space = space - 1;
        }

        int j = 1;
        while (j<=n-i+1)
        {
            cout<<"*";
            j = j + 1;
        }

        i = i + 1;
        cout<<endl;
    }

}
*/

// Write a programe to print this pattern.
/*
*****
 ****
  ***
   **
    *




int main(){
    int n;
    cout<<"Enter the number to print the pattern:";
    cin>>n;

    int i = 1;
    while (i<=n)
    {
        int space = i-1;
        while (space)
        {
            cout<<" ";
            space = space - 1;
        }

        int j = 1;
        while (j<=n-i+1)
        {
            cout<<i;
            j = j + 1;
        }

        i = i + 1;
        cout<<endl;
    }

}
*/

// Write a progrme to print this pattern

/*
     1
    22
   333
  4444
 55555
666666


int main()
{
    int n;
    cout << "Enter a number to print the pattern: ";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        // printing the spaces first.
        int space = n - i;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }

        // now printing the left pattern
        int j = 1;
        while (j <= i)
        {
            cout << i;
            j = j + 1;
        }

        i = i + 1;
        cout << endl;
    }
}


// Write a programe to print this pattern

int main(){
    int n;
    cout<<"Enter the number to print the pattern:";
    cin>>n;

    int i = 1;
    while (i<=n)
    {
        int space = i-1;
        while (space)
        {
            cout<<" ";
            space = space - 1;
        }

        int j = 1;
        while (j<=n-i+1)
        {
            cout<<j+i-1;
            j = j + 1;
        }

        i = i + 1;
        cout<<endl;
    }

}
*/

// Write a code to print this pattern.

/*
   1
  22
 333
4444

int main(){
    int n;
    cout<<"Enter a number to print this pattern: ";
    cin>>n;

    int i = 1;
    while (i<=n)
    {
        // prnting the space first.
        int space = n-i;
        while (space)
        {
            cout<<" ";
            space = space -1;
        }

        // printing the left pattern.
        int j = 1;
        while (j<=i)
        {
            cout<<i;
            j = j+1;
        }
        i = i +1;
        cout<<endl;

    }
}
*/

// Write a code to print this pattern.

/*
   1
  23
 456
78910

int main(){
    int n;
    cout<<"Enter a number to print this pattern: ";
    cin>>n;

    int i = 1;
    int count = 1;
    while (i<=n)
    {
        // prnting the space first.
        int space = n-i;
        while (space)
        {
            cout<<" ";
            space = space -1;
        }

        // printing the left pattern.
        int j = 1;
        while (j<=i)
        {
            cout<<count;
            j = j+1;
            count = count +1;
        }
        i = i +1;
        cout<<endl;

    }
}
*/

// Write as programe to print a pattern.

/*
  1
 121
12321

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int i = 1;
    while (i<=n)
    {
        // printing the spaces the first.
        int space = n - i;
        while (space)
        {
            cout<<" ";
            space = space - 1;
        }

        // print the first triangle
        int j = 1;
        while (j<=i)
        {
            cout<<j;
            j = j + 1;
        }

        // print the second triangle
        int z = i - 1;
        while (z)
        {
            cout<<z;
            z = z - 1;
        }
        i = i + 1;
        cout<<endl;


    }

}
*/

// Write a programe to print this pattern.

/*
1234554321
1234**4321
123****321
12******21
1********1

int main()
{
    int n;
    cout << "Enter the number to print the pattern: ";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        // printing the first pattern.
        int j = 1;
        while (j <= n - i + 1)
        {
            cout << j;
            j = j + 1;
        }
        // printing the star
        int star = 1;
        while (star <= i - 1)
        {
            cout << "*";
            star = star + 1;
        }
        // printing the star again.
        int star1 = 1;
        while (star1 <= i - 1)
        {
            cout << "*";
            star1 = star1 + 1;
        }
        // printing the number pattern again
        int z = 1;
        while (z <= n - i + 1)
        {
            cout << n - i - z + 2;
            z = z + 1;
        }

        i = i + 1;
        cout << endl;
    }
}
*/

// Write a programe to print this pattern.

/* 
    *  
    *
* * * * *
    * 
    * 
*/

/*
int main(){
    int n;
    cin>>n;

    if(n%2 != 0 ){
        int r = n/2;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if((r+1)==j || (r+1)==i){
                    cout<<" * ";
                }
                else{
                    cout<<"   ";
                }
            }
            cout<<endl;
            
        }
        
    }
        
}
*/


