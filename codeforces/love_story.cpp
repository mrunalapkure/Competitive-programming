#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    string aim = "codeforces";    
    
        for (int i = 1; i <= t; i++) {
           string s;
           cin >> s;
           int diff = 0;
            for (int i = 0; i < 10; ++i){
                if (s[i] != aim[i])
                  ++diff;
            }
            cout << diff << endl;
        }
    return 0;
}

