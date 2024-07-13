#include <iostream>
#include<string.h>
using namespace std;

// Predeclared character array.

/*
int main(){
    char arr[100] = "apple";         //already declared.

    int i = 0;
    while (arr[i] != '\0')
    {
        cout<<arr[i]<<endl;
        i++;
    }

}
*/

// Taking input from the user.

/*
int main(){
    char arr[100];
    cin>>arr;

    cout<<arr;
}
*/

// Q.1> Chech weather the given word is PALINDROME.

/*
int main(){
    int n;
    cin>>n;

    char arr[n+1];
    cin>>arr;

    bool check = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]!=arr[n-i-1])
        {
            check = 0;
            break;
        }

    }

    if (check == true)
    {
        cout<<"PALINDROME!";
    }
    else{
        cout<<"No!";
    }


}
*/

// Find the largest word in the string?

/* 
int main()
{
    int n;
    cin >> n;
    cin.ignore();

    char arr[n + 1];
    cin.getline(arr, n);
    cin.ignore();

    int i = 0;
    int currLen = 0, maxLen = 0;
    while (1)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (currLen > maxLen)
            {
                maxLen = currLen;
            }
            currLen = 0;
        }
        else
        {

            currLen++;
            if (arr[i] == '\0')
            {
                break;
            }
            i++;
        }
    }
    cout << "Largest word in the string is: " << maxLen << endl;
}
*/

