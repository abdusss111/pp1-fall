#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> v;
    int n, vec, x;
    cin >> n;
    for (  int i=0; i<n; i++ ){
        cin >> vec;
        v.push_back(vec);
    }
    cin >> x;
    reverse(v.begin() + x, v.begin() + 1);
    for ( int i=0; i<n; i++ ){
        cout << v[i] << " ";
    }
    return 0;
}