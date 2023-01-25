#include <bits/stdc++.h>
using namespace std;
long long n, x=1;
int degreeof2(){
    if ( n==0 ) return x;
    x*=2;
    n-=1;
    return degreeof2();
}
int main(){
    cin >> n;
    cout << degreeof2();
    return 0;
}