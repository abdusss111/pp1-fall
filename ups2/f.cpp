#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, cnt=0;
    cin >> n;
    int a[n][n];
    for ( int i=0; i<n; i++ ){
        for ( int j=0; j<n; j++ ){
            cin >> a[i][j];
        }
    }
    for ( int i=0; i<n; i++ ){
        for ( int j=0; j<n; j++ ){
            if ( (i + j)==(n-1) and a[i][j]==a[n-1-i][n-1-j] ){
                cnt++;
            }
        }
    } 
    if (cnt==n) cout << "Perfect.";
    else cout << "Not perfect.";
    return 0;
}