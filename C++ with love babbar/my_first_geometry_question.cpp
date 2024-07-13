#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string x;
        cin >> x;

        if (x == "0000")
            cout << 1 << endl;
        else if (x == "0001" || x == "0010" || x == "0100" || x == "1000")
            cout << 11 << endl;
        else if (x == "1100" || x == "0011")
            cout << 21 << endl;
        else if (x == "1001" || x == "1010" || x == "0101" || x == "0110")
            cout << 121 << endl;
        else if (x == "1110" || x == "1101" || x == "1011" || x == "0111")
            cout << 11 * 21 << endl;
        else if (x == "1111")
            cout << 21 * 21 << endl;
        else
            cout << "Wrong input of number" << endl;
    }
}