#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n, m;
    cin >> n;
    int a[n];
    for ( int i=0; i<n; i++ ){
        cin >> a[i];
    }
    cin >> m;
    int b[m];
    for ( int i=0; i<m; i++ ){
        cin >> b[i];
    }
    int k = n + m;
    int c[k];
    for ( int i=0; i<n; i++ ){
        c[i] = a[i];
    }
    for ( int i=0; i<m; i++ ){
        c[n+i] = b[i];
    }
    sort(c, c+k);
    for ( int i=0; i<k; i++ ){
        cout << c[i] << " ";
    }

}