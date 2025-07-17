#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
        for(int i = 1; i <= n; i++){
            string s;
            cin >> s;
            int count_A = 0, count_B = 0;
            for (char c : s)
            {
            if (c == 'A') count_A++;
            else if (c == 'B') count_B++;
        }

        if (count_A > count_B)
            cout << 'A' << endl;
        else
            cout << 'B' << endl;
        }
    return 0;
}