#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
 
    if (a > b && a > c && a > d) {
        cout << "0" << endl;
    } else if (a<b && a<c && a<d) {
        cout << "3" << endl;
    } else if (a < b && a < c ) {
        cout << "2" << endl;
    } else if (a < b &&  a < d) {
        cout << "2" << endl;
    }

     else if (a < c && a < d ) {
        cout << "2" << endl;
    } else {
        cout << "1" <<endl;
    }
    }
    return 0;
	
}