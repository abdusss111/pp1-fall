#include <bits/stdc++.h>
using namespace std;
size_t n, x=1;
int fact(){
    if ( n==0 ) return x;
    x*=n;
    n=n-1;
    return fact();
}
int main(){
    cin >> n;
    cout << fact();
    return 0;
}