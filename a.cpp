#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <string> vs, rvs;
    string s;
    for( int i=0; i<=n; i++ ){
        getline(cin, s);
        vs.push_back(s);
        reverse(s.begin(), s.end());
        rvs.push_back(s);
    }
    int cnt=0;
    for( int i=0; i<n; i++ ){
        if(rvs[i]==vs[i]) cnt++;
    }
    cout << cnt;
    return 0;
}