#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
        for (int i = 1; i <= t; i++){
            int a, b, c, d, e, f;
            cin >> a >>b >>c >>d >>e >>f ;
            
            if( (a==c)&&(a==e) ) {
                    if ((b+d+f)==(a)) {
                         cout << "YES" << endl;
                    }  
            }
            else{
                cout << "NO" <<endl;
            }  
        }
    return 0;
}