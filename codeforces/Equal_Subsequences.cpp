#include <iostream>
using namespace std;

void solve(int n, int k) {
    int ones = k;
    int zeros = n - k;
    string s = "";

    // Interleave 1s and 0s as long as we can
    while (ones > 0 && zeros > 0) {
        s += '1';
        ones--;
        if (zeros > 0) {
            s += '0';
            zeros--;
        }
    }

    // Add remaining 1s or 0s
    s += string(ones, '1');
    s += string(zeros, '0');

    cout << s << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        solve(n, k);
    }
    return 0;
}
