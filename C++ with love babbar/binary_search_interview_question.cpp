// #include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Q.> Write a programe to rotate an array?

/*
void rotateArray(int arr[], int n, int d) {
    // Create a temporary array to store elements to be rotated
    int temp[d];

    // Store the first 'd' elements in the temporary array
    for (int i = 0; i < d; i++) {
        temp[i] = arr[i];
    }

    // Shift the remaining elements of the array
    for (int i = d; i < n; i++) {
        arr[i - d] = arr[i];
    }

    // Copy the elements from the temporary array back to the original array
    for (int i = 0; i < d; i++) {
        arr[n - d + i] = temp[i];
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout<<"Enter the length of an array: ";
    cin>>n;
    int arr[n];
    cout<<"Input the element of an array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int d; // Number of rotations
    cout<<"How many rotation do you want?: ";
    cin>>d;

    cout << "Original array: ";
    printArray(arr, n);

    rotateArray(arr, n, d);

    cout << "Rotated array: ";
    printArray(arr, n);

    return 0;
}
*/

// Q.> Write a programe to find the Pivot Element in an array?

/*
int getPivot(int arr[],int n){
    int s = 0, e = n-1,mid = s + (e-s)/2;

    while (s<e)
    {
        if (arr[mid]>= arr[0])
        {
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}

int main(){
    int arr[5] = {3,8,10,17,1};
    cout<<"Pivot is: "<<getPivot(arr,5)<<endl;
}
*/

// Q.> Write a programe to find the element using binary method in sorted and rotated array?

/*
int getPivot(int arr[],int n){
    int s = 0, e = n-1,mid = s + (e-s)/2;

    while (s<e)
    {
        if (arr[mid]>= arr[0]) s = mid + 1;
        else e= mid;
        mid = s + (e-s)/2;
    }
    return s;
}


bool binarySearch(int arr[],int s,int e, int k){
    int mid = s + (e-s)/2;
    while (s<e)
    {
        if(arr[mid] == k ) return true;
        else if(arr[mid]>k) e = mid -1;
        else s = mid + 1;
        mid = s + (e-s)/2;
    }
    return false;
}


int main(){
    int k,n;
    cin>>k>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int Pivot = getPivot(arr,n);
    if(k>=arr[Pivot] && k<=arr[n-1]){
        bool ans = binarySearch(arr,Pivot,n-1,k);
        if(ans) cout<<"Found in 2nd Part.";
        else cout<<"Not Found.";
    }
    else{
        bool ans = binarySearch(arr,0,Pivot,k);
        if(ans) cout<<"Found in 1st Part.";
        else cout<<"Not Found.";
    }
}
*/

// Q.> Write a programe to find the square root of an given element using binary search?

/*
int squareRoot(int n) {
    // Handle negative input
    if (n < 0) {
        return -1; // Indicate invalid input
    }

    int s = 0, e = n - 1, mid = s + (e - s) / 2;
    int ans = -1;
    while (s < e) {
        int square = mid * mid;
        if (square == n)
            return mid;
        else if (square > n)
            e = mid - 1;
        else {
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int ans = squareRoot(n);
    if (ans == -1) {
        cout << "Invalid input (negative number)" << endl;
    } else {
        cout << "Square Root of " << n << " is: " << ans << endl;
    }

    return 0;
}

*/

// Q.> Write a programe for Book Allocation Problem?

/*
*/
bool isPossible(int arr[], int n, int m, int mid)
{
    int studentCount = 1;
    int pageSum = 0;

    for (int i = 0; i < n; i++)
    {
        if (pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }
        else
        {
            studentCount++;
            if (studentCount > m || arr[i] > mid)
            {
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}


int allocatedBooks(int arr[], int n, int m)
{
    int s = 0, sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}


int main(){
    int n,m;
    cout<<"Enter the number of student and number of books respectively:\n";
    cin>>m>>n;
    cout<<"Enter the number of pges in each book:\n";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<endl;
    int ans = allocatedBooks(arr,n,m);
    cout<<"The minimum number of pages allocted to one student is: "<<ans;

}

// Q.>  Write a programe for the accurate distance of aggaressive cows?

/*
bool isPossible(int arr[], int n,int k, int mid)
{
    int cowCount = 1;
    int lastPos = arr[0];
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i] - lastPos >= mid)
        {
            cowCount++;
            if (cowCount == k)
            {
                return true;
            }
            lastPos = arr[i];
        }
    }
    return false;
}

int aggressiveCows(int arr[], int n, int k)
{
    sort(arr, arr + n);
    int s = 0;
    int maxi = -1;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, arr[i]);
    }
    int e = maxi;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (isPossible(arr, k,n, mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main(){
    int n,k;
    cout<<"Enter the no. of stalls: ";
    cin>>n;
    cout<<"Enter the number of cows: ";
    cin>>k;
    cout<<"Enter the distance between the stalls: \n";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int ans = aggressiveCows(arr,n,k);
    cout<<"Maximim distance between the stalls is: "<<ans<<endl;
}
*/