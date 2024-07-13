#include <iostream>
using namespace std;

// Q.1> Given a square matarix A & its number of rows(or coloumn)N, return the transpose of A. The transpose of a matrix is the matrix flipped over it's main diagonal, switcing the row and the coloumn indices of the matrix.

/*
int main(){
    int n;
    cin>>n;

    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }

    }

    cout<<"Transpose of the matrix is: \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            // Swaping the element.
            int temp = arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }

    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
*/

// Q.2> Given two 2-Dimentional array of sizes n1*n2 and n2*n3. Your task is to multiply theses matrices and output the multipled matrix.

/*
int main()
{
    int n1, n2, n3;
    cout << "If 2 matrixes are n1*n2 & n2*n3, then enter the value of n1,n2,n3: ";
    cin >> n1 >> n2 >> n3;

    int arr1[n1][n2];
    int arr2[n2][n3];
    int arr3[n1][n3];

    cout << "Enter the 1st matrix: \n";
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cin >> arr1[i][j];
        }
    }
    cout << "Enter the 2nd matrix: \n";

    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cin >> arr2[i][j];
        }
    }

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            arr3[i][j]=0;
        }

    }


    cout << "Multiplication of the matrix is: \n";

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            for (int k = 0; k < n2; k++)
            {
                arr3[i][j] = arr3[i][j] + arr1[i][k] * arr2[k][j];
            }

        }
    }
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }

}
*/

// Q.3>Finding the element in the given matrix.

// Liner Search.

/*
int main()
{
    int n, m;
    cout << "Enter the size of the matrix: ";
    cin >> n >> m;

    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int search;
    cout<<"Enter the element to search in the matrix: ";
    cin>>search;

    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (search==arr[i][j])
            {
                flag = true;
            }

        }

    }
    if (flag)
    {
        cout<<"Element found!";
    }
    else{
        cout<<"Element not found";
    }


}
*/

// OPTIMISE SEARCH.

int main()
{

    int n, m;
    cout << "Enter the size of the matrix: ";
    cin >> n >> m;

    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int search;
    cout << "Enter the element to search in the matrix: ";
    cin >> search;

    int r = 0, c = m - 1;
    bool found = false;

    while (r < n && c >= 0)
    {
        if (arr[r][c] == search)
        {
            found = true;
        }
        else if (arr[r][c] > search)
        {
            c--;
        }
        else
        {
            r++;
        }
    }
    if (found)
    {
        cout << "Element Found!";
    }
    else
    {
        cout << "Element not found.";
    }
}



// Nahi aa raha hai answer.