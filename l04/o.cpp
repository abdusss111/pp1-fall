#include <iostream>
using namespace std;
int main(){
    long long n, mxd=-100000, i, j, rx, cx;
    cin >> n;
    long long a[n][n];
    for ( i=0; i<n; i++ ){
        for ( j=0; j<n; j++ ){
            cin >> a[i][j];
        }
    }
    i=0;
    j=0;
    for ( i=j; i<n; i++ ){
        for ( j=i; j<n; j++ ){
            if ( i==j and a[i][j]>mxd ){
            mxd=a[i][j];
            rx=i+1;
            cx=j+1;
            }
        }
    }
    cout << "Maximum element is: " << mxd << " with coordinates: " << rx << ";" << cx;
    return 0;
}