#include <bits/stdc++.h>
using namespace std;
int main(){
    string s, t;
	cin >> s >> t;
    int cnt=0;
	if ( t.size()%s.size()!=0 ) {
		cout << "NO";
		return 0;
	}
    cnt = t.size() / s.size();
	for ( int i=0; i<cnt; i++ ){
		int l;
        l = s.size()*i;
		if ( t.substr( l,(int)s.size() ) != s) {
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	return 0;
}