#include <bits/stdc++.h>
using namespace std;
int main(){
    set <char> ms;
    string s;
    cin >> s;
    for ( int i=0; i<s.size(); i++ ){
        if ( isupper(s[i]) ) s[i]=s[i]+32;
        ms.insert(s[i]);
    }
    cout << ms.size() << endl;
    for ( int i : ms ) cout << char(i) << " ";
    return 0;
}