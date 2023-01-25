#include <iostream>
using namespace std;
int main() {
    long long n, t, cnt=0;
    cin >> n;
    int a[n];
    int b[n];
    for ( int i=0; i<n; i++ ){
        cin >> a[i];
    }
    for ( int i=0; i<n; i++ ){
        cin >> b[i];
    }
    cin >> t;
    for ( int i=0; i<n; i++ ){
        if ( a[i]<=t and t<=b[i] ) cnt++;
    }
    cout << cnt;
    return 0;
}