#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        string s;
        cin >> s;

        // Convert the string to lowercase
        transform(s.begin(), s.end(), s.begin(), ::tolower);

        if (s == "yes") {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
