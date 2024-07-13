#include <iostream>
using namespace std;

// Dynamic memory allocation of 2D Array.

// This is for (nXn) matrix.
/*
int main(){
    int n;
    cin>>n;

    // Creating 2D array in HEAP.
    int **arr = new int*[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }


    // Now taking the input.
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
    }

    // Taking the output.
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }



    // Now we are releasing the memory in the heap.
    for (int i = 0; i < n; i++)
    {
        delete [] arr[i];
    }
    delete []arr;
}
*/
\



// Now we look for (nXm) matrix.
/*
int main()
{
    int row;
    cin >> row;
    int col;
    cin >> col;

    // Creating 2D array in HEAP.
    int **arr = new int *[row];
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }

    // taking input
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    // taking output
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


    // Now we are releasing the memory in the heap.

    for (int i = 0; i < row; i++)
    {
        delete [] arr[i];
    }
    delete []arr;
    
}
*/



// Jagged array.


int main(){
    int n;
    cin>>n;

    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int **arr = new int*[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[a[i]];   
    }


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < a[i]; j++)
        {
            cin >> arr[i][j];
        }
    }


    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < a[i]; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }   
}


// Finally done by myself 😊😊😊