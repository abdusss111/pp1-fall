#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <string> vs(n);
    vector <int> vn(n);
    vector < pair <string, int> > wf;
    for ( int i=0; i<n; i++ ){
        cin >> vs[i] >> vn[i];
    }
    sort( vs.begin(), vs.end() );
    sort( vn.begin(), vn.end() );
    for ( int i=0; i<n; i++ ){
        wf.push_back( make_pair( vs[i], vn[i] ) );
    }
    for ( int i=0; i<n; i++ ){
        cout << wf[i].first << " " << wf[i].second << endl;
    }
    return 0;
}