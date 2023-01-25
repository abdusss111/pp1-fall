#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    if( int(sqrt(n)) == sqrt(n) ){
        cout << "Yes";
    }
    else{
        cout << "No";
    }

}