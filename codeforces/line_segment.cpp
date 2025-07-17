#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int px, py, qx, qy;
        cin >> px >> py >> qx >> qy;

        vector<int> a(n);
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }

        long long dx = px - qx;
        long long dy = py - qy;
        double dist = sqrt(dx * dx + dy * dy);

        if (sum >= dist && fmod(sum - dist, 2.0) == 0.0)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}
