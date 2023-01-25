#include <bits/stdc++.h>
using namespace std;
int ecnt=0, i=0;
string s;
int even( string s ){
    if ( i==s.size() ) return ecnt;
    if ( s[i]%2==0 ) ecnt++;
    i++;
    return even( s );
}
int main(){
    cin >> s;
    cout << even( s );
    return 0;
}