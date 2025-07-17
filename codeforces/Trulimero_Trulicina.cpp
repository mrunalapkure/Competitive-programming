#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<vector<int>> grid(n, vector<int>(n));
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                cin >> grid[i][j];

        int size = 2 * n;
        vector<int> p(size + 1, 0); // p[1] to p[2n]
        unordered_map<int, int> used; // value -> 1 if already used

        for (int s = 2; s <= size; ++s) {
            unordered_map<int, int> freq;
            for (int i = 0; i < n; ++i) {
                int j = s - i - 1;
                if (j >= 0 && j < n) {
                    int val = grid[i][j];
                    freq[val]++;
                }
            }
            // Among these, find the one that hasn't been used
            for (auto &[val, count] : freq) {
                if (used[val] == 0) {
                    p[s] = val;
                    used[val] = 1;
                    break;
                }
            }
        }

        // Remaining number is p[1], the one missing from used
        for (int i = 1; i <= size; ++i) {
            if (used[i] == 0) {
                p[1] = i;
                break;
            }
        }

        // Output the permutation
        for (int i = 1; i <= size; ++i)
            cout << p[i] << " ";
        cout << "\n";
    }

    return 0;
}