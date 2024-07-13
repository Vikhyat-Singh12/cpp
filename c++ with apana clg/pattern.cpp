#include <iostream>
using namespace std;

// Write a code for hollow rectangle pattern.
/*
****
*  *
*  *
*  *
****
*/

/*
int main(){
    int row, col;
    cin>>row>>col;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if (i==1 || i==row || j==1 || j==col)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }

        }
        cout<<endl;

    }

}
*/

/*
// write a programe to print this pattern.

    *
   **
  ***
 ****
*****

int main(){
    int n;
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        int space = n-i;
        while (space)
        {
            cout<<" ";
            space = space-1;
        }
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;


    }

}
*/

// Write a programe to print this pattern.

/*

*       *
**     **
***   ***
**** ****
*********
*********
**** ****
***   ***
**     **
*       *

*/

/*
int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        int space = n - i;

        while (space)
        {
            cout << " ";
            space = space - 1;
        }
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = n - i + 1; j >= 1; j--)
        {
            cout << "*";
        }

    int space = i-1;
        while (space)
        {
            cout<<" ";
            space = space-1;
        }

        for (int a = 1; a <= i-1; a++)
        {
            cout<<" ";
        }

        for (int k = n-i+1; k >=1; k--)
        {
            cout<<"*";
        }

        cout<<endl;
    }

}
*/

// Write a programe to print the following pattern.

/*
12345
1234
123
12
1
*/

/*
int main(){
    int n;
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        int count = 1;
        for (int j = n-i+1; j >=1; j--)
        {
            cout<<count;
            count = count + 1;
        }
        cout<<endl;
    }

}
*/

// Write a programe to print this pattern.
/*
1
01
101
0101
10101
*/

/*
int main(){
    int n;
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i+j)%2==0)
            {
                cout<<"1 ";
            }
            else{
                cout<<"0 ";
            }
        }
        cout<<endl;

    }


}
*/

// Write ap rograme to print this pattern.

/*
    *****
   *****
  *****
 *****
*****

*/

/*
int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= n; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
*/

// Write a prohrame to print the forllowing structure.

/*
    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5

*/

/*
int main(){
    int n;
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j<= n-i; j++)
        {
            cout<<" ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout<<k<<" ";
        }
        cout<<endl;


    }

}
*/
// Write a programe to print this pattern.
/*
    1
   212
  32123
 4321234
543212345
*/

/*

int main(){
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n-i+1; j++)
        {
            cout<<" ";
        }
        for (int j = i; j >= 1; j--)
        {

            cout<<j;
        }
        for (int j = 2; j <= i; j++)
        {
            cout<<j;
        }

        cout<<endl;

    }

}
*/


// Write a programe to print the following patter.
/*
    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *
*/

/*
int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
          cout<<"*";
        }
        for (int j = 2; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
*/


//Write a programe to print the folloeing seguence.
/*
*****
*   *
*   * 
*   *
*****
*/
/*
int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n)
            {
                cout << "*";
            }
            else if (j == 1 || j == n)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout<<endl;
    }
}
*/


//Write a programme to print a following pattern.

/*

     *       *
   *   *   *   *
 *       *       *

*/


int main(){
    int n;
    cin>>n;

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if ((i+j)%4 == 0  || (i==2 && j%4==0))
            {
                cout<<" * ";
            }
            else{
                cout<<"   ";
            }
        }
        cout<<endl;
        
    }
    

}



