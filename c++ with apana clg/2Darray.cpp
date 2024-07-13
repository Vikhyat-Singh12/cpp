#include <iostream>
using namespace std;

// 2 - D array;

/*
int main()
{
    int a, b;
    cout << "Enter the size of matrix: ";
    cin >> a >> b;

    int arr[a][b];

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;
    cout << "Matrix is: \n";
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    // to find the given element in the matrix.

    cout << endl;
    int search;
    bool flag = false;
    cout << "Enter the element to be searched in the matrix: ";
    cin >> search;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (arr[i][j] == search)
            {
                cout << "The position is: " << i + 1 << " X " << j + 1 << endl;
                flag = true;
            }
        }
    }

    if (flag == true)
    {
        cout << "Element is founded.";
    }
    else
    {
        cout << "Element is not founded.";
    }
}
*/

// SPIRAL ORDER PRINT.

int main()
{
    int a, b;
    cout << "Enter the size of matrix: ";
    cin >> a >> b;

    int arr[a][b];

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> arr[i][j];
        }
    }

    int row_start = 0, coloumn_start = 0, row_end = a - 1, coloumn_end = b - 1;

    while (row_end >= row_start && coloumn_end >= coloumn_start)
    {
        // for first row.
        for (int col = coloumn_start; col <= coloumn_end; col++)
        {
            cout << arr[row_start][col] << " ";
        }
        row_start++;

        // For last coloumn.
        for (int row = row_start; row <= row_end; row++)
        {
            cout << arr[row][coloumn_end] << " ";
        }
        coloumn_end--;

        // For Last Row

        for (int col = coloumn_end; col >= coloumn_start; col--)
        {
            cout << arr[row_end][col] << " ";
        }
        row_end--;

        // For first  coloumn.
        for (int row = row_end; row >= row_start; row--)
        {
            cout << arr[row][coloumn_start] << " ";
        }
        coloumn_start++;
    }
}