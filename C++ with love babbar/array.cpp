#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

// Q1.> Write a programe to fin min and max element of an array?

/*
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int min = arr[0] , max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>max)
        {
            max = arr[i];
        }
        else if (arr[i]<min)
        {
            min = arr[i];
        }

    }

    cout<<"Max. & Min. element are "<<max<<" "<<min;

}
*/

//  Q2.> Write a code to print the sum of all the element in the array?

/*
int main(){
    int n;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout<<"The sum of all the element of an array are "<<sum;

}
*/

// Q3.> Write a programe to revese an array?

/*
int main(){
    int n;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < n/2; i++)
    {
        //swap(arr[i],arr[n-1-i]);                  // This is an inbuilt function for swaping 2 element.

                        // OR

        int temp = arr[i];
        arr[i] = arr[ n-i-1];
        arr[n-i-1] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

}
*/

// Q4.> Write a programe to swap the alternate element?

/*
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (n % 2 == 0)
        for (int i = 0; i < n; i += 2)
        {
            swap(arr[i], arr[i + 1]);
        }
    else
        for (int i = 0; i < (n - 1); i += 2)
        {
            swap(arr[i], arr[i + 1]);
        }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
*/

// Q5.> Write a programme to find the unique element in the array?

/*
int main(){
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int r = 0;
    for (int i = 0; i < n; i++)
    {
        r = r^arr[i];
    }
    cout<<"The unique element in list: "<<r;

}
*/

// Q6.> Write a programme to find the occurence of the number is unique or not?

/*
bool checkUniqueFrequency(int arr[], int n)
{

    vector<int> frequency(n + 1);

    // For counting the frequency of each element
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[j] == i) {
                frequency[i - 1]++;
            }
        }
    }

    // Checking if frequency array contains any duplicate
    // or not
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j || frequency[i] == 0)
                continue;
            if (frequency[i] == frequency[j]) {

                // If any duplicate frequency then return
                // false
                return false;
            }
        }
    }

    // If no duplicate frequency found, then return true
    return true;
}

// Driver Code
int main()
{
    // Given array arr[]
    int arr[] = { 11,11,12,12,67,67,67,99,99,99,99};
    int n = sizeof arr / sizeof arr[0];

    // Function Call
    bool res = checkUniqueFrequency(arr, n);

    // Print the result
    if (res)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
*/

// Q7.> Write a programe to find the duplicate inthe array?

/*
int main(){
    int n;
    cin>>n;
    int arr[n];
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    // XOR ing all the aray elements
    for (int i = 0; i < n; i++)
    {
        ans = ans^arr[i];
    }

    // Xor [1,n-1]
    for (int i = 1; i < n; i++)
    {
        ans = ans^i;
    }
    cout<<ans<<endl;

}
*/

// Q8.> Write a programe find the intersection of two array?

/*
int main(){
    int a,b;
    bool flag = 0;
    cin>>a;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin>>arr[i];
    }
    cin>>b;
    int arr1[b];
    for (int i = 0; i < b; i++)
    {
        cin>>arr1[i];
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (arr[i]==arr1[j])
            {
                cout<<arr[i]<<" ";
                arr[i] = 0;
                arr1[j] = 0;
                flag = 1;
            }

        }

    }
    if(flag == 0) cout<<-1;


}
*/

// OR
/*
int main()
{
    int i = 0, j = 0;
    int a, b;
    bool flag = 0;
    cin >> a;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    cin >> b;
    int arr1[b];
    for (int i = 0; i < b; i++)
    {
        cin >> arr1[i];
    }

    while (i < b && j < b)
    {
        if (arr[i] == arr1[j])
        {
            cout << i << " ";
            arr[i] = 0;
            arr1[j] = 0;
            i++;
            j++;
        }
        else if (arr[i] < arr1[j])
            i++;
        else
            j++;
    }
}

*/


// Q9.> Write a programe to find all the pairs of element such that sum of the element is equal the given element?

/*
int main(){
    int a,x;
    cin>>x;
    cin>>a;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = i+1; j < a; j++)
        {
            if (arr[i] + arr[j]==x)
            {
                cout<<"The pair : "<<arr[i]<<" "<<arr[j]<<endl;
            }
        }
    }
}
*/


//Q10.> Write a programe to find all the triplets of element such that sum of the elements is equal the given element?
/*
int main(){
    int x,a;
    cin>>x;
    cin>>a;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = i+1; j < a; j++)
        {
            for (int k = i+2; k < a; k++)
            {
                if (arr[i] + arr[j] + arr[k]==x)
            {
                cout<<"The pair : "<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
            }
            }
            
        }
    }
}


*/

// Q11.> Write a programe to sort 0's and 1's?

/*
int main(){
    int a;
    cin>>a;
    int arr[a];
    int left = 0,right = a-1;
    for (int i = 0; i < a; i++)
    {
        cin>>arr[i];
    }
    while (left<right)
    {
        while (arr[left]==0 && left<right)
        {
            left++;
        }
        while (arr[right]==1 && left<right)
        {
            right--;
        }

        swap(arr[left],arr[right]);
        left++;
        right--;
        
    }
    
    
    for (int i = 0; i < a; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}
*/


// Q11.> Write a programe to sort 0's , 1's  and  2's?

int main(){
    int a;
    cin>>a;
    int arr[a];
    int left = 0,right = a-1;
    for (int i = 0; i < a; i++)
    {
        cin>>arr[i];
    }
}