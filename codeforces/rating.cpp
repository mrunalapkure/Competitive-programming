#include<iostream>
using namespace std;

int main(){
    int t;
    cin >>t;
    int rating;
        for (int i = 1; i <= t; i++){
            cin >> rating;
                if(1900 <= rating){
                    cout <<"Division 1"<< endl;
                }
                    else if((1600 <= rating) && (rating<=1899)){
                          cout <<"Division 2"<< endl;
                    }
                        else if((1400<=rating)&&(rating<=1599)){
                              cout <<"Division 3"<< endl;
                        }
                            else {
                                  cout <<"Division 4"<< endl;
                            }
        }
            
    return 0;
}