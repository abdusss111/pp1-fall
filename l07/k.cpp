#include <bits/stdc++.h>
using namespace std;
long long mx=0, n, k=0; 
int maxxx(){
    k=n%10;
    if ( k>mx ) mx=k;
    n/=10;
    if( n==0 ) return mx;
    return maxxx();
}
int main(){
    cin >> n;
    cout << maxxx();
    return 0;
}