#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
        for(int i = 1; i <= t; i++){
            int a, b, c;
            cin >> a >> b >> c;
            if ((a+b>= 10) || (a+c >= 10) ){
                cout <<"YES"<<endl;
            } 
                else if ((b+a>=10) || (b+c >= 10)){
                    cout <<  "YES"<< endl;
                }
                    else {
                        cout <<"NO"  << endl;
                    }
                }
    return 0;
}
