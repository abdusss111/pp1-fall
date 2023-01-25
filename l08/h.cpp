#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> v;
    int n, x, y;
    cin >> n;
    for (  int i=0; i<n; i++ ){
        cin >> x;
        v.push_back(x);
    }
    sort( v.begin(), v.end() );
    cin >> y;
    for ( int i=0; i<y; i++ ){
        cout << v[i] << " ";
    }
    return 0;
}