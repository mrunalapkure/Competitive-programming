#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
        for (int i = 1; i <= t; i++)
        {
            int a,b,c;
            cin >> a >> b >> c;
                if(a+b == c){
                    cout << '+' <<endl;
                }
                else if (a-b == c){
                    cout << '-' <<endl;
                }
                else {
                    cout << endl;
                }
        }
    return 0;
}