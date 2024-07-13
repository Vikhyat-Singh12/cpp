#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

// WAYS TO DECLARE STRING.

    // string str;
    // cin>>str;
    // cout<<str;

    // string str1(5,'n');
    // cout<<str1<<endl;

    // string str2 = "VikhyatSingh";
    // cout<<str2<<endl;

    
// TO TAKE INPUT OF A LINE.

    // string str3;
    // getline(cin,str3);
    // cout<<str3<<endl;
    
// Different function of a string.
    string s1 ="Fam",s2 = "ily";
    s1.append(s2);                              //Apend string s2 in string s1
    cout<<s1<<endl;
    cout<<s1+s2<<endl;                          //Concatinate the 2 string
    cout<<s1[2]<<endl;                          //Accessing character in the string

    s2.clear();                                // Used to clear the string
    cout<<s2<<endl;

    string s4 = "abc";
    string s5 = "abc";

    cout<<s4.compare(s5)<<endl;                 //Used to check wheater 2 string are equal or not. If yes then it gives 0 as output
    
    if (s2.empty())                             //Used to check weather string is empty or not.
    {
        cout<<"String is empty."<<endl;
    }
    
    string s6 = "sahbuyfchsdbaiu";
    s6.erase(3, 5);                            //It is used to delete some character from the word [.erase(index,words)]
    cout<<s6<<endl;
    cout<<s6.find("bai")<<endl;                //It is used to find some character in the given word and if it present then it return the first index of the character.
    cout<<s6.size()<<endl;                     //It gives the size of the length 
    cout<<s6.substr(6,3)<<endl;                //It gives the substring from the string

    string s7 = "465";
    int x = stoi(s7);                          //It is used to convert string to integer quickly
    cout<<x+3<<endl;
    
    string s8 = "bsahdifwuiefbuuixw";
    sort(s8.begin(),s8.end());                 //It is used to sort the string.
    cout<<s8<<endl;
    
    
    
    
    
    return 0;


}