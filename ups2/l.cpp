#include <iostream>
using namespace std;
int main() {
    int n, m; 
    cin >> n >> m;
    int a[n][m];
    for ( int i=0; i<n; i++ ){
        for ( int j=0; j<m; j++ ){
            cin >> a[i][j];
        }
    }
    int t;
    cin >> t;
    int cnt=0;
    for ( int i=0; i<n; i++ ){
        for ( int j=0; j<m; j++ ){
            if ( a[i][j]>t ) cnt++;
        }
    }
    if ( cnt==0 ) cout << "No penalty for today."; 
    else cout << "Penalty!";
    return 0;
}