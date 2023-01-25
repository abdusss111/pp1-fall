#include <iostream>
using namespace std;
void f(int a[], int n ){
    for ( int i=0; i<n; i++ ){
        cin >> a[i];
    }
    for ( int i=0; i<n; i++ ){
        cout << a[n-1-i] << " ";
    }
}
int main(){
    int n; 
    cin >> n;
    int a[n];
    f(a, n);
    return 0;
}