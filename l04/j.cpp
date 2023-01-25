#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long long n, m;
    cin >> n >> m;
    long long a[n][m];
    for ( int i=0; i<n; i++){
        for ( int j=0; j<m; j++ ){
            cin >> a[i][j];
        }
    }
    for ( int i=0; i<n; i++){
        for ( int j=0; j<m; j++ ){
            if( (i+j)%2==0 ) a[i][j]+=1;
            else if ( (i+j)%2!=0 ) a[i][j]-=1;
        }
    }
    for ( int i=0; i<n; i++){
        for ( int j=0; j<m; j++ ){
            cout << a[i][j] << " ";
    }
    cout << endl;
    }
    return 0;
}