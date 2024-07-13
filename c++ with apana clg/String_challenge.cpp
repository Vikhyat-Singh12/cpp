#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>

using namespace std;

/*
int main()
{

    // Convert into the UpperCase

    string str = "chfhHJHhguHGUSRfutGCYKgdrahg";
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
    }
    cout << str << endl;

    // Convert into the LowerCase

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    }
    cout << str << endl;

    // Convert to UpperCase using a function

    transform(str.begin(),str.end(),str.begin(),::toupper);
    cout<<str<<endl;

    // Convert to LowerCase using a function

    transform(str.begin(),str.end(),str.begin(),::tolower );
    cout<<str<<endl;

}
*/

// Q2.> From the biggest number from the numeric string.

/*
int main()
{

    string s = "459879126";
    sort(s.begin(),s.end(),greater<int>());          //It is used to sort the number given in the string
    cout<<s<<endl;
}
*/

int main(){
    string s = "ndbskhfuskucigshdvyasss";
    int freq[26];

    for (int  i = 0; i < 26; i++)
    {
        freq[i]=0;
    }
    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i]-'a']++;                        //Line clearm= na hai
    }
    char ans ='a';
    int maxF = 0;

    for (int i = 0; i < 26; i++)
    {
        if (freq[i]>maxF)
        {
            maxF = freq[i];
            ans = i +'a';
        }
        
    }
    cout<<maxF<<" "<<ans<<endl;
    
    
}
