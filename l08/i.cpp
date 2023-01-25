#include <bits/stdc++.h>
using namespace std;
vector <int> v;
int n, x, y;
string binsearch( int y ){
    if ( v[n]==y) return "Yes";
    if ( n==0 ) return "No"; 
    n=n-1;
    return binsearch(y);
}
int main(){
    cin >> n;
    for (  int i=0; i<n; i++ ){
        cin >> x;
        v.push_back(x);
    }
    cin >> y;
    cout << binsearch(y);
    return 0;
}