#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n, k, one;
    cin >> n >> k >> one;
    if ( one == 1 ){
        for ( long long i=0; i<k; i++ ) if ( i*i>=n and i*i<=k ) cout << i*i << " ";
    }
    if ( one == -1 ){
        for ( long long i=k; i>0; i-- ) if ( i*i>=n and i*i<=k ) cout << i*i << " ";
    }
    return 0;
}