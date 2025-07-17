#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
        for(int i = 0; i < t; i++) {
            int a;
            cin >> a;
            int sum = (a / 10) + (a % 10);
            cout << sum << endl;
        }
    return 0;
}