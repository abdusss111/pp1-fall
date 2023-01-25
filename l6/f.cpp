#include <iostream>
using namespace std;
string func( string s, int n ){
    int cnt = 0;
    for ( size_t i=0; i<s.size(); i++ ){
        if ( isdigit(s[i]) ) cnt++;
    }
    if ( cnt>=n ) return "YES";
    return "NO";
}
int main(){
    int n;
    string s;
    cin >> s >> n;
    cout << func( s, n );
    return 0;
}