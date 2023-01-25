#include <iostream>
using namespace std;
int main(){
    int n, srs, pts;
    cin >> n;
    for ( int i=0; i<n; i++ ){
        pts=n-i-1;
        srs=2*i+1;
        for ( int j=0; j<pts; j++ ){
            cout << ".";
        }
        for ( int j=0; j<srs; j++ ){
            cout << "*";
        }
        for ( int j=0; j<pts; j++ ){
            cout << ".";
        }
        cout << endl;
    }
    return 0;
}