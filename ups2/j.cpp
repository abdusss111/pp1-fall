#include <iostream>
using namespace std;
int main() {
    string s;
    int mx=0, mn=9999999;
    cin >> s;
    for ( int i=0; i<s.size(); i++ ){
        s[i]=int(s[i]-48);
        if ( s[i]>mx ) mx=s[i];
        if ( int(s[i])<mn ) mn=s[i];
    }
    cout << mx << " " << mn;
    return 0;
}
