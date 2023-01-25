#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    long long sum=0;
    cin >> n;
    int a[n];
    for ( int i=0; i<n; i++){
        cin >> a[i];
    }
    int size = sizeof(a[n])/sizeof(a[0]);
    reverse(a, a+n );
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    return 0;
}