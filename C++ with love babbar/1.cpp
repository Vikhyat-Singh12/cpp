#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    int ans = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // XOR ing all the array elements
    for (int i = 0; i < n; i++) {
        ans = ans ^ arr[i];
    }

    // XOR [1,n-1]
    for (int i = 1; i < n; i++) {
        ans = ans ^ i;
    }

    cout << ans << endl;
    return 0;
}
