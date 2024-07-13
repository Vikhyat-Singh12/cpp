#include <iostream>
#include <math.h>
using namespace std;

// Linear Search in the array.
/*
int main(){
    int row,col;
    cin>>row>>col;
    int arr[row][col];

    cout<<"Enter the elements of the array\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"Enter the element to search in the array: ";
    int target;
    cin>>target;
    bool flag = 0;
    int x = 0,y =0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(arr[i][j]==target) {
                flag = 1;
                x = i,y=j;
                continue;
            }
        }

    }
    if(flag) cout<<"Element found at index --> "<<x+1<<" , "<<y+1;
    else cout<<"Element not found!";

}
*/

// Q.> Write a code to find row and column wise sum in the array?

/*
int main()
{
    int row, col;
    cin >> row >> col;
    int arr[row][col];

    cout << "Enter the elements of the array\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum+=arr[i][j];
        }
        cout<<"Sum of the "<<i+1<<" row : "<<sum<<endl;
    }
    cout<<endl;
    for (int i = 0; i < col; i++)
    {
        int sum = 0;
        for (int j = 0; j < row; j++)
        {
            sum+=arr[j][i];
        }
        cout<<"Sum of the "<<i+1<<" column : "<<sum<<endl;
    }
}
*/


// Q.> Write a programe to find the sum of maximum row and find its index?
/*
int largestRowSum(int arr[3][3]){
    int arr_row[3];
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum+=arr[i][j];
        }
        arr_row[i] = sum;
    }

    int index = 1;
    int max = arr_row[0];
    for (int i = 0; i < 3; i++)
    {
        if(arr_row[i]>max) {
            max = arr_row[i];
            index = i+1;
        }
    }
    cout<<"Max sum of the row is : "<<max<<" & index is : "<<index;


}


int main()
{
    // int row, col;
    // cin >> row >> col;
    int arr[3][3];

    cout << "Enter the elements of the array\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    largestRowSum(arr);
}
*/

// Q.> Write a programe to print column wise?
/*
*/
int main(){
    int row, col;
    cin >> row >> col;
    int arr[row][col];

    cout << "Enter the elements of the array\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < col; i++)
    {
        if(i&1){
            for (int j = row-1; j >= 0; j--)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        else{
            for (int j = 0; j < row; j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    


}


// Write a programe to perform a spiral print?

/*
int main(){
    int row, col;
    cin >> row >> col;
    int arr[row][col];

    cout << "Enter the elements of the array\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout<<"Spiral print are: "<<endl;

    int row_start = 0, coloumn_start = 0, row_end = row - 1, coloumn_end = col - 1;

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
*/


// Q.> Write a programe to rotate the 2D-array 90 degree?

                        // First method
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

    for (int i = 0; i < n; i++)
    {
        for (int j = n-1; j >= 0; j--)
        {
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }    
}
*/

                    //Second method

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


    // Trnspose of the matrix.
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         int temp = arr[i][j];
    //         arr[i][j] = arr[j][i];
    //         arr[j][i] = temp;
    //     }
    // }


    // Adjusting it.

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         int temp = arr[i][j];
    //         arr[i][j] = arr[n-1-j][i];
    //         arr[n-1-j][i] = temp;
    //     }
    // }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }

    // Reverse each row
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n / 2; j++) {
            swap(arr[i][j], arr[i][n - 1 - j]);
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




// Q.> Write a programe for a binary search to search the target in the 2D array which is sorted?

/*
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
    }

    int target;
    cout<<"Enter a value to search in the array: ";
    cin>>target;
    bool flag = 0;
    int s = 0 , e = n*m-1;
    int mid = s + (e-s)/2;

    while (s<=e)
    {
        int element = arr[mid/m][mid%m];
        if(element == target){
            flag = 1;
            break;
        }
        else if(element<target) s = mid +1;
        else e = mid -1;
        mid = s + (e-s)/2;
    }
    
    if(flag) cout<<"Element Found"<<endl;
    else cout<<"Element not found!"<<endl;

}

*/