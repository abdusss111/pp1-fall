#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int a[n][m];
    int sum[n];
    for ( int i=0; i<n; i++ ){
        for ( int j=0; j<m; j++ ){
            cin >> a[i][j];
        }
    }
    for ( int i=0; i<n; i++ ){
        sum[i]=0;
        for ( int j=0; j<m; j++ ){
            sum[i]+=a[i][j];
        }
    }
    for ( int i=0; i<n; i++ ){
        cout << sum[i]/m << " ";
    }
    return 0;
}