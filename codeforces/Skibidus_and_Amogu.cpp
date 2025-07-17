// #include<iostream>
// #include <vector>

// using namespace std;

// int main(){
//     int t;
//     cin >> t;
//     vector<string> strings(t); 
//     for (int i = 0; i < t; ++i) {
//         cin >> strings[i]; 
//     }  
// cout << i[]
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string word;
        cin >> word;

        // Replace "us" with "i"
        word = word.substr(0, word.size() - 2) + "i";
        cout << word << endl;
    }
    return 0;
}
