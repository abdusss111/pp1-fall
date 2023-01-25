#include <iostream>
using namespace std;

int eqls(int n, int a[], int b[]) {
    int x[101];
    int y[101]; 
    int sum = 0;
    for ( int i = 1; i <= 100; ++ i ) {
        x[i] = 0;
        y[i] = 0;
    }
    for ( int i = 1; i <= n; ++ i ){
        x[a[i]] ++;
    }
    for ( int i = 1; i <= n; ++ i ){
        y[b[i]] ++;
    }
    for ( int i = 1; i <= 100; ++ i ){
        sum += min (x[i], y[i]);
    }
    return sum;
}
int main () {
    int n;
    cin >> n;
    int a[n + 1], b[n + 1];
    for ( int i = 1; i <= n; ++ i ) {
        cin >> a[i];
    }
    for ( int j = 1; j <= n; ++ j ) {
        cin >> b[j];
    }
    cout << eqls (n, a, b);
    return 0;
}