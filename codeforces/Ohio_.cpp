#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        int n = s.length();
        int i = 0;
        int pairs = 0;

        while (i < n - 1) {
            if (s[i] == s[i + 1]) {
                pairs++;
                i += 2;
                
            } else {
                i++;
            
            }
        }

         cout << (n - pairs) << endl;
    }

    return 0;
}
