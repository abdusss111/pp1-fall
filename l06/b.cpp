#include <iostream>
#include <cmath>
using namespace std;
void f1( int * ar1, int * ar2, int n ){
    int ar3[n];
    for ( int i=0; i<n; i++ ){
        ar3[i] = abs(ar2[i] - ar1[i]);
    }
    for ( int i=0; i<n; i++ ){
        cout <<  ar3[i] << " ";
    }
}
int main(){
    int n;
    cin >> n;
    int ar1[n];
    int ar2[n];

    for ( int i=0; i<n; i++ ){
        cin >> ar1[i];
    }
    
    for ( int i=0; i<n; i++ ){
        cin >> ar2[i];
    }

    f1( ar1, ar2, n);
    
    return 0;
}