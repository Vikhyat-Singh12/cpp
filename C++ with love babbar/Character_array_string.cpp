#include <iostream>
#include <string>
#include <math.h>
using namespace std;

/*
int main(){
    char arr[20];
    cin>>arr;
    int i = 0;
    // Counting the length of the string?
    while (arr[i]!=0)
    {
        i++;
    }
    // Reversing the string?
    int s = 0,e = i-1;
    while (s<e)
    {
        swap(arr[s++],arr[e--]);
    }
    cout<<arr;


}
*/

/*
int main(){
    char arr[20];
    bool flag = 1;
    cin>>arr;
    int i = 0;
    // Counting the length of the string?
    while (arr[i]!=0)
    {
        i++;
    }
    // Checking the pailendrome
    int s = 0,e = i-1;
    while (s<e)
    {
        if(arr[s++]!=arr[e--])
            flag = 0;
    }

    if(flag)
        cout<<"Yes";
    else
        cout<<"No";


}
*/

// Write a programe to lower case the word?

/*
char toLowerCase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

int main(){

    cout<<toLowerCase('C');

}
*/

// Q.> Write a programe to store the maximum number of repeated charcter in the wors?

/*
char getMaxOccCharacter(string s){
    int arr[26] = {0};

    for(int i = 0;i<s.length();i++){
        char ch = s[i];
        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }

    int maxi = -1,ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if(maxi < arr[i]){
            ans = i;
            maxi = arr[i];
        }
    }

    char finalAns = 'a' + ans;
    return finalAns;

}

int main(){
    string s;
    cin>>s;

    cout<<"Maximum repeated word is: "<<getMaxOccCharacter(s);
}
*/

// Q.> Write a programe to insert "@40" in  the place of the white space " "?

/*
string replaceSpaces(string &s){

    string temp = "";

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else
            temp.push_back(s[i]);

        return temp;
    }
}

int main(){
    string s;
    cin >> s;

    cout << replaceSpaces(s);


}
*/

// Q.> Remove all the sub string from the given string?

/*
string RemoveSubstring(string str ,string substr){
    while(str.length()!=0 && str.find(substr) < str.length()){
        str.erase(str.find(substr),substr.length());
    }
    return str;
}

int main(){
    string s ,sub;
    cin>>s;
    cin>>sub;

    string left = RemoveSubstring(s,sub);
    cout<<left<<endl;
}

*/

// Q.> Write a programe to uppercase the string?

/*

string toupperCase(string str){

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i]>='a' && str[i] <='z')
        {
            str[i] = str[i] - 'a' + 'A';
        }
    }
    return str;


}

int main(){
    string s;
    cin>>s;

    cout<<toupperCase(s);
}

*/



//Q.> A programe for counting the letters of the string?

/*
#include <bits/stdc++.h>
int main()
{
    string s;
    cin >> s;
    int arr[26] = {0};

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i] - 'a';
        arr[ch]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (arr[i] != 0)
        {
            char ch = 'a' + i;
            cout << ch << " --> " << arr[i] << " " << endl;
        }
    }
    cout << endl;

    // For using this sort function we need to include ---->  #include<bits/stdc++.h>
    sort(arr, arr + 26);

    for (int i = 0; i < 26; i++)
    {
        if (arr[i] != 0)
            cout << arr[i] << " ";
    }
}

*/


// Q.>Write a programe for string compression?
/*
int main()
{
    string s;
    cin >> s;
    int arr[26] = {0};

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i] - 'a';
        arr[ch]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (arr[i] != 0)
        {
            char ch = 'a' + i;
            cout <<ch<< arr[i];
        }
    }

}
*/

/*
#include <bits/stdc++.h>
#include<math.h>
using namespace std;

int main() {
	int n,x,y;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        cin>>x;
        int a=x;
        int r,sum=0,j=0;
        while(x>0){
            j++;
            x/=10;
        }
        for (int k = j-1; k >=0; k--)
        {
            r = a%10;
            sum += r*pow(10,k);
            a/=10;
        }
        cout<<sum<<endl;
    }

}
*/















// Phir se dekhana hai