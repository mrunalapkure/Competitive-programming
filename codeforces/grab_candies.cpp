#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;  // number of test cases

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        // Sort in descending order
        sort(a.rbegin(), a.rend());

        int mihai = 0, bianca = 0;
        bool ok = true;

        for (int i = 0; i < n; ++i) {
            if (a[i] % 2 == 0)
                mihai += a[i];
            else
                bianca += a[i];

            if (mihai <= bianca) {
                ok = false;
                break;
            }
        }

        if (ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
