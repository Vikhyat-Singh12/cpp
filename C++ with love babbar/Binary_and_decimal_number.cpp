#include <iostream>
#include <math.h>
using namespace std;

/*
// Positive Digit to binary conversion.

int main()
{
    int n;
    cout << "Enter a digit to gets its binary: ";
    cin >> n;

    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int bit = n & 1;
        ans = (bit * pow(10, i) + ans);
        n = n >> 1;
        i++;
    }
    cout << "Answer is : " << ans << endl;
}
*/
/*
*/
// Binary to Digit conversion.

int main()
{

    int n;
    cout << "Enter the binary number: ";
    cin >> n;

    int answer = 0;
    int digit = 0;
    int i = 0;
    while (n != 0)
    {
        digit = n % 10;
        answer = (digit * pow(2, i) + answer);
        n = n / 10;
        i++;
    }

    cout << "The digit answer: " << answer << endl;
}






