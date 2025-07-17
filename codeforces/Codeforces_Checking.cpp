#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    string arr = "codeforces";
        for (int i = 1; i <= t; i++) {
            
            char a;
            cin >> a;
                if (arr.find(a) != string::npos){
                    cout << "YES" <<endl;
                }
                else {
                    cout << "NO" << endl;
                }
        }
    return 0;
}