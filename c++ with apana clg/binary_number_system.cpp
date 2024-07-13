#include <iostream>
using namespace std;

// reverse a following input number.

int main()
{
    int n;
    cin >> n;

    while (n != 0)
    {
        int a;

        a = n % 10;
        cout << a;

        n = n / 10;
    }
}
