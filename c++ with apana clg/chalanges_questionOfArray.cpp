#include <iostream>
using namespace std;

//   Question of lecture no. = 23,24,25.

/*
int main(){
    int mx = INT16_MIN;

    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        mx = max(mx,arr[i]);
        cout<<mx<<" ";
    }

}
*/

// Sum of all the SunArray.

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

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            sum = sum + arr[j];
            cout << sum << endl;
        }
    }
    cout << "Sum of all the SunArray: " << sum;
}
*/

// Question thet being asked in the GOOGLE  test series anmed KICK START.

/*
int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = 2;
    int pd = a[1] - a[0];
    int j = 2;
    int curr = 2;

    while (j < n)
    {
        if (pd == a[j] - a[j - 1])
        {
            curr++;
        }
        else
        {
            pd = a[j] - a[j - 1];
            curr = 2;
        }
        ans = max(ans, curr);
        j++;
    }
    cout << ans<<endl;
}
*/

// Again question asked in GOOGLE quiz named KICK START.

/*

// By my basic idea with  not seeing solution.

int main(){
    int n;
    cin>>n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    int Record = INT16_MIN;
    int date = 0;


    for (int i = 0; i < n; i++)
    {
        Record = max(Record,a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (Record==a[i])
        {
            date = i+1;
        }

    }


    cout<<"The maximum number of visitor come on day "<<date<<" with "<<Record<<" visitors.";

}
*/

/*
int main(){
    int n;
    cin>>n;

    int a[n+1];
    a[n] = -1;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    if (n==1)
    {
        cout<<"1"<<endl;
    }
    int ans = 0;
    int mx = -1;

    for (int i = 0; i < n; i++)
    {
        if (a[i]>mx && a[i]>a[i+1])
        {
            ans++;
        }
        mx = max(mx,a[i]);
    }

    cout<<"Total record breaking day: "<<ans<<endl;
}
*/

// Lecture - 24

// Q> Given an array of size N. The task is to find the first repeating element in the array of integers, i.e., an element that occurs more than once and whoe isndex of first occurence is smallest.

/*

// By my basic idea.

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << "Index is " << i << " and repeated value is " << arr[i] << endl;
                break;
            }
        }
    }
}
*/

/*
int main(){
    int n;
    cin>>n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    const int N= 200;
    int idx[N];
    for (int i = 0; i < N; i++)
    {
        idx[i] = -1;
    }

    int minidx = INT16_MAX;
    for (int i = 0; i < n; i++)
    {
        if (idx[a[i]] != -1)
        {
            minidx = min(minidx,idx[a[i]]);
        }
        else{
            idx[a[i]] = i;
        }

    }
    if (minidx == INT16_MAX)
    {
        cout<<"-1"<<endl;
    }
    else{
        cout<<minidx +1 <<endl;
    }

}
*/

// Q.>Sum of sub array upto given number.

/*
int main(){
    int n;
    cin >>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int s;
    cout<<"Enter the sum of sub array to find: ";
    cin>>s;

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
           sum += arr[j];
           if (sum == s)
           {
            cout<<"From position "<<i+1<<" to "<<j+1<<endl;
            break;
           }

        }
        sum = 0;
    }
}
*/

// Q> Finding the smallest possible missing number in array.

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int b = INT16_MAX;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] <= 0)
        {
            b = 0;
        }
        else
        {
            b = min(b, a[i]);
        }
    }
    cout<<"The smallest positive no. in arrray: "<<b;
}




// Lecture - 25

// Baad me dekhana hai
