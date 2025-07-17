#include<iostream>
using namespace std;

int main(){
    int c;
    cin >> c;
    for(int i = 1; i <= c; i++){
        int a, b;
        cin >> a >> b;
        cout << ((c - a)+(b - c)) << endl;

    }
    return 0;
}
