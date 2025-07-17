#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
        for (int i = 1; i <= t; i++){
            int l,r,d,u;
            cin >>l >>r >> d >>u;
                
                    if ((l==r)&&(d==u)&&(l==d)){
                         cout << "Yes" << endl;
                    }
            
            else {
                cout << "No" <<endl;
            }
        }

    return 0;
}