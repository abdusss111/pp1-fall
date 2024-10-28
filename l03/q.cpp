#include <iostream>
using namespace std;
int main(){
    int n;
    bool flag = false;
    cin >> n;
    for(int i = 2; i < n / 2; i++) {
        if(n % i == 0) {
            flag = true;
        }
    }
    if( n==4 ){
        cout << "No";
        return 0;
    }
    if ( flag ) {
        cout << "No";
    } else {
        cout << "Yes";
    }
}