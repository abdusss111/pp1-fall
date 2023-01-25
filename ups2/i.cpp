#include <iostream>
using namespace std;
int main() {
    long long n, mx=0, i, j;
    cin >> n;
    int a[n][n];
    int max[n];
    for ( i=0; i<n; i++ ){
        for ( j=0; j<n; j++ ){
            cin >> a[i][j];
        }
    }
    for ( i=0; i<n; i++ ){
      	max[i]=0;
      	for ( j=0; j<n; j++ ){
          	if ( max[i]<a[i][j] ) max[i]=a[i][j];
        }
    }
    for ( int i=0; i<n; i++ ){
        for ( int j=0; j<n; j++ ){
            a[i][j]=max[i];
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}