#include <iostream>
using namespace std;
int main() {
    long long n, mx=0, mx2=0, cnt1=0, cnt2=0;
    cin >> n;
    int a[n];
    for ( int i=0; i<n; i++ ){
        cin >> a[i];
        if ( a[i]>mx ) mx=a[i];
    }
    for ( int i=0; i<n; i++ ){
         if ( a[i]>mx2 and a[i]!=mx ) mx2=a[i];  
    } 

    for ( int i=0; i<n; i++ ){
        if ( a[i]==mx ) cnt1++;
        if ( a[i]==mx2 ) cnt2++;
    }
    if ( cnt1>=2 ) cout << mx*mx;
    else cout << mx*mx2;
    return 0;
}