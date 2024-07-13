#include <iostream>
#include <bits/stdc++.h>
using namespace std;

                                             // Recursion (Day - 1)

// Q.> Write a factorial programe by using recursion?

/*
int factorial(int n){
    if(n == 0)
        return 1;

    int chotti = factorial(n-1);
    int badi = n * chotti;

    return badi;
}

int power(int n){
    if(n==0)
        return 1;

    int chotti = power(n-1);
    int badi = 2 * chotti;

    return badi;
}

void print(int n){
    if(n==0)
        return;

    cout<<n<<" ";
    print(n-1);
}

int main(){
    int n;
    cin>>n;

    int ans = factorial(n);
    cout<<"Factorial is: "<<ans<<endl;

    int ans1 = power(n);
    cout<<"Power is: "<<ans1<<endl;

    print(n);
}
*/



                                                // Recursion(Day - 2)


/*
void reachHome(int src,int dest){
    cout<<"Source "<<src<<" destination "<<dest<<endl;

    // base case
    if(src == dest){
        cout<<"Pahuch Gaya"<<endl;
        return;
    }

    // Processing - ek step aage badh jao!
    src++;

    // resursive call
    reachHome(src,dest);
}

int main(){
    int dest = 10;
    int src = 1;

    cout<<endl;
    reachHome(src,dest);
}
*/


// Q.> Write a programe to write a fibonacci series?

/*
int fibonacci(int n){
    // base case
    if(n==0)
        return 0;
    if(n== 1)
        return 1;

    int ans = fibonacci(n-1) + fibonacci(n-2);
    return ans;
}

int main(){
    int n;
    cin>>n;

    cout<<"Fibonacci sum is: "<<fibonacci(n)<<endl;

}
*/

// Q.> Write a programe to count the number of ways to climb the stair?

/*
int countwaytoclimbstairs(int n){
    // base case
    if(n<0)
        return 0;
    if(n==0)
        return 1;

    int ans = countwaytoclimbstairs(n-1)+countwaytoclimbstairs(n-2);

    return ans;
}

int main(){
    int n;
    cin>>n;

    cout<<countwaytoclimbstairs(n)<<endl;
}
*/

// Q.> Write a programe to say the digiits?

/*
#include<string>

void sayDigits(int n,string arr[]){
    // base case
    if(n==0)
        return ;

    // processing
    int digit = n%10;
    n = n/10;

    // recursive call
    sayDigits(n,arr);
    cout<<arr[digit]<<" ";
}

int main(){
    int n;
    cin>>n;

    string arr[10] = {"zero" , "one", "two" , "three", "four" , "five" , "six", "seven","eight","nine"};

    sayDigits(n,arr);

}
*/



                                            // Recursion (Day - 3)

// Q.> Write a programe to find that the array is sorted or not using recursion?

/*
bool isSorted(int arr[],int size){
    // base case
    if(size ==0 || size == 1)
        return true;

    if(arr[0]>arr[1])
        return false;
    else{
        bool remaining = isSorted(arr+1,size-1);
        return remaining;
    }
}

int main(){
    int n;
    cin>>n;
    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    bool ans =  isSorted(arr,n);
    if(ans){
        cout<<"Array is sorted!";
    }
    else {
        cout<<"Nope!";
    }

}
*/

// Q.> Write a programe to find the sum of the elements of an array using recursion>?

/*
int sumArray(int arr[],int size){
    // base case
    if(size == 0)
        return 0;
    if(size == 1)
        return arr[0];

    // int sum = 0;
    // sum += arr[0];
    // sumArray(arr+1,size-1);

    int sum = arr[0] + sumArray(arr+1, size-1);         // Add the return value of the recursive call

    return sum;
}

int main(){
    int n;
    cin>>n;
    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int ans = sumArray(arr,n);
    cout<<"Sum of the array is: "<<ans<<endl;

    delete []arr;
}
*/

// Q.> Write a programe to find the target element in the array with liner search with recursion?

/*
bool isFound(int arr[],int size,int target){
    // base case
    if(size == 0)
        return false;
    if(size >= 1 && arr[0]==target)
        return true;

    return isFound(arr+1,size-1,target);

}

int main(){
    int n,x;
    cin>>x>>n;
    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    bool ans = isFound(arr,n,x);
    if(ans) cout<<"Found!"<<endl;
    else cout<<"Not Found!"<<endl;

    delete []arr;
}
*/

// Q.> Write a programe to find the target element in the array with Binary search with recursion?

/*
bool binarySearch(int *arr,int s,int e,int k){

    int mid =  s +(e-s)/2;
    //base case

    // element not found
    if(s>e)
        return false;

    // element found
    if(arr[mid]==k)
        return true;

    if(arr[mid]<k) return binarySearch(arr,mid+1,e,k);
    else return binarySearch(arr,s,mid-1,k);

}


int main(){
    int n,x;
    cin>>x>>n;
    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    bool ans = binarySearch(arr,0,n,x);
    if(ans) cout<<"Found!"<<endl;
    else cout<<"Not Found!"<<endl;

    delete []arr;
}
*/

// Q2.> write a programe to find First and Last Position of an Element in Sorted Array using recursion?

/*
int firstOcc(int arr[],int s,int e,int k){
    int mid = s + (e-s)/2;
    int ans = -1;
    // base case
    if(s>e)
        return ans;
    if(arr[mid]==k){
        ans = mid;
        return firstOcc(arr,s,mid-1,k);
    }

    if(arr[mid]<k) return firstOcc(arr,mid+1,e,k);
    else return firstOcc(arr,s,mid-1,k);
}


int lastOcc(int arr[],int s,int e,int k){
    int mid = s + (e - s) / 2;
    int ans = -1;
    // base case
    if (s > e)
        return ans;
    if (arr[mid] == k) {
        ans = mid;
        return lastOcc(arr, mid + 1, e, k);
    }

    if (arr[mid] < k)
        return lastOcc(arr, mid + 1, e, k);
    else
        return lastOcc(arr, s, mid - 1, k);

}

int main(){
    int n,x;
    cin>>x>>n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }


    cout<<"First Occurence of "<<x<<" is at Index: "<<firstOcc(arr,0,n-1,x)<<endl;
    cout<<"Last Occurence of "<<x<<" is at Index: "<<lastOcc(arr,0,n-1,x)<<endl;

    delete []arr;
}
*/

// Recursion (Day - 4)

// Q.>Write a programe to reverse the string using recursion?

/*

                        // Without using recursion.
int main(){
    string arr;
    cin>>arr;

    for (int i = arr.length(); i >= 0; i--)
    {
        cout<<arr[i];
    }

}
*/

// With recursion.
/*
void reverse(string& str,int s, int e){
    // base case

    if(s > e){
        return;
    }
    // Condition
    swap(str[s],str[e]);
    s++;
    e--;
    // recursive call
    reverse(str,s,e);
}

int main(){
    string str;
    cin>>str;

    reverse(str,0,str.length()-1);
    cout<<str;
}
*/

// Q.> Write  a programe to check wheater the input string is PALINDROME or not using recursion?

//  Without recursion

/*
bool Palindrome(string str,int s,int e){
    while (s<e)
    {
        if(str[s]==str[e]){
            return true;
            s++,e--;
        }
        else{
            return false;
            break;
        }
    }


}

int main(){
    string str;
    cin>>str;

    bool ans =Palindrome(str,0,str.length()-1);
    if(ans){
        cout<<"Palindrome!";
    }
    else{
        cout<<"Nope";
    }

}
*/

                                            // With recursion
/*
bool checkPlaindrome(string str, int s, int e)
{
    // base case
    if (s > e)
        return true;

    // condition
    if (str[s] != str[e])
    {
        return false;
    }
    else
    {
        // recusive call
        s++,e--;
        return checkPlaindrome(str, s, e);
    }
}

int main()
{
    string str;
    cin >> str;

    bool ans = checkPlaindrome(str, 0, str.length() - 1);

    if (ans)
    {
        cout << "Palindrome!";
    }
    else
    {
        cout << "Nope";
    }
}

*/


// Q.> Write a programe to find the power of any number to any number using recursion?


/*
int power(int a,int b){
    // base case
    if(b==0) return 1;

    if(b==1) return a;

    // Recursive Call.
    int ans = power(a,b/2);

    // if b is even
    if(b%2==0){
        return ans*ans;
    }
    else{
        return a*ans*ans;
    }

}



int main(){
    int a,b;
    cin>>a>>b;

    int ans = power(a,b);
    cout<<"Answer is: "<<ans<<endl;
}
*/


// Q.> Write a programe for BUBBLE SORT using recursion ?

/*
void bubbleSort(int *arr,int n){
    // base case
    if(n==0||n==1){
        return;
    }
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubbleSort(arr,n-1);
    
}

int main(){
    int n,x;
    cin>>x>>n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    bubbleSort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    delete []arr;
    
}
*/




/*



// Homework question Selection Sort and Bubble Sort?

void selectionSort(int *arr,int n){
    // base case
    if(n==0||n==1){
        return;
    }

    // Condition

}
*/





                                        // Recursion(Day - 5)

// Q.> Write a programe for Merge sorted array using recusion?

/*
void merge(int *arr, int s, int e) {
    int mid = s + (e - s) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // Copy values from arr to first and second arrays
    for (int i = 0; i < len1; i++) {
        first[i] = arr[s + i]; // Correct indexing
    }

    for (int i = 0; i < len2; i++) {
        second[i] = arr[mid + 1 + i]; // Correct indexing
    }

    // Merge two sorted arrays
    int index1 = 0;
    int index2 = 0;
    int mainArrayIndex = s;

    while (index1 < len1 && index2 < len2) {
        if (first[index1] < second[index2]) {
            arr[mainArrayIndex++] = first[index1++];
        } else {
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    // Copy remaining elements of first array
    while (index1 < len1) {
        arr[mainArrayIndex++] = first[index1++];
    }

    // Copy remaining elements of second array
    while (index2 < len2) {
        arr[mainArrayIndex++] = second[index2++];
    }

    delete[] first;
    delete[] second;
}


void mergeSort(int arr[],int s,int e){
    // base case
    if(s>=e) return;

    int mid = s + (e-s)/2;

    // left part sort karana hai
    mergeSort(arr,s,mid);
    // right part sort karana hai
    mergeSort(arr,mid+1,e);

    // merge
    merge(arr,s,e);

}



int main(){
    int arr[5] = {2,5,1,6,9};
    int n = 5;

    mergeSort(arr,0,n-1);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

*/



                                        // Recursion(Day - 6)


// Q.> Write a programe for Quick Sort using recursion?

/*
int partition(int arr[],int s,int e){
    int pivot = arr[s];

    int cnt = 0;
    for (int i = s+1; i <= e; i++)
    {
        if(arr[i]<=pivot){
            cnt++;
        }
    }

    // place pivot at right position
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex],arr[s]);


    // left and right wala part sambhal lete h
    int i= s,j = e;
    while (i<pivotIndex && j>pivotIndex)
    {
        while(arr[i]<pivot){
            i++;
        }
        while (arr[j]>pivot)
        {
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++],arr[j--]);
        }
        
    }
    return pivotIndex;
    
    
}

void quickSort(int arr[], int s, int e){

    // base case
    if(s >= e) return;

    // partition karana hai
    int p = partition(arr, s, e);

    // left part ko sort karana hai
    quickSort(arr, s, p - 1);

    // Right part ko sort karna hai
    quickSort(arr, p + 1, e);
}

 
int main(){
    int arr [5]= {2 , 9 , 6 ,4 ,1};
    int n = 5;

    quickSort(arr,0,n-1);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
*/



                                            // Recursion (Day - 7)


// Q.> Write a programe to find al the Subset of an array(i.e. Power Set) using recursion?

/*

// Function to print subsets
void printSubsets(int set[], int n, int subset[], int subSize, int index) {
    // Base case: if the index reaches the size of the set
    if (index == n) {
        // Print the subset
        for (int i = 0; i < subSize; i++) {
            cout << subset[i] << " ";
        }
        cout << endl;
        return;
    }

    // Exclude the current element and move to the next index
    printSubsets(set, n, subset, subSize, index + 1);

    // Include the current element in the subset
    subset[subSize] = set[index];
    printSubsets(set, n, subset, subSize + 1, index + 1);
}

// Function to generate all subsets
void generateSubsets(int set[], int n) {
    int subset[n];
    printSubsets(set, n, subset, 0, 0);
}

int main() {
    int set[] = {1, 2, 3};
    int n = sizeof(set) / sizeof(set[0]);
    generateSubsets(set, n);
    return 0;
}
*/


// ................................. Left part hai baad me dekhunga..........................

                                            //Recursion(Day - 8)


// ................................. Left part hai baad me dekhunga..........................



                                            // Recursion(Day - 9)

// ................................. Left part hai baad me dekhunga..........................


                                            // Recursion(Day - 10)


// ................................. Left part hai baad me dekhunga..........................
