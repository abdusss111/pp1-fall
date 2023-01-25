#include <iostream>
using namespace std;
int main(){
    int n, m, drop = 10001, counter = 0, subject;
    cin >> n >> m;
    int a[n][m];
    for ( int i=0; i<n; i++ ){
        for (int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }
    for ( int i=0; i<n; i++ ){
        for (int j=0; j< m; j++ ) counter += a[i][j];
        if ( counter<drop ){
            drop=counter;
            subject=i;
        }
        counter=0;
    }
    cout << subject+1;
    return 0;  
}