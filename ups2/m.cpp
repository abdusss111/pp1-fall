#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n, m;
    cin >> n >> m;
    for ( int i=-60; i<=60; i++ ){
        if ( n*pow( 2, i )==m ){
            cout << "YES " << i;
            return 0;
        }
    }
    cout << "NO";
    return 0;
}