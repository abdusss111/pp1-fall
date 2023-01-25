#include <iostream>
using namespace std;
int main(){
    long long n, sum=0, i, j;
    cin >> n;
    long long a[n][n];
    for ( i=0; i<n; i++ ){
        for ( j=0; j<n; j++ ){
            cin >> a[i][j];
        }
    }
    for ( i=0; i<=n; i++ ){
        for ( j=0; j<=n; j++ ){
            if ( i+j==n-1 and a[i][j]>-1000000 ){
            sum=sum+a[i][j];
            }
        }
    }
    cout << sum;
    return 0;
}