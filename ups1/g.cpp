#include <iostream>
using namespace std;
int main(){
    int n, sum=0, mx=0;
    cin >> n;
    int a[n];
    for ( int i=0; i<n; i++ ){
        cin >> a[i];
    }
    for ( int i=0; i<n; i++ ){
        if ( a[i]>0 ) sum = sum + a[i];
    }
    for ( int i=0; i<n; i++ ){
        if ( a[i]>mx ) mx = a[i];
    }
    cout << sum << " " << mx;
}