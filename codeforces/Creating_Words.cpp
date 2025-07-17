#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
        for (int i = 1; i <= t; i++){
            string one, two;
            cin >> one >> two;
            swap(one[0], two[0]);

            cout << one << " " << two << endl;
        }
    return 0;
}