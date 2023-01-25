#include <iostream>
using namespace std;
void func( string s ){
    int cnt=0;
    for ( int i=0; i<s.size(); i++ ){
        s[i]=int( s[i]-48 );
        if ( s[i]%2==0 ) cnt++;
    }
    if ( cnt == s.size() ) cout << "Valid";
    else cout << "Not valid";
}
int main(){ // a e i o u
    string s;

    getline(cin, s);
    int cnt=0;
    func( s );
    return 0;
}