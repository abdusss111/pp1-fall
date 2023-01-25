#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> v;
    int n, x, mx=-9999, mn;
    cin >> n;
    for (  int i=0; i<n; i++ ){
        cin >> x;
        v.push_back(x);
    }
    sort( v.begin(), v.end() );
    mn=v[0];
    mx=v[n-1];
    cout << mx-mn;
    return 0;
}