#include <bits/stdc++.h>
using namespace std;
int i=0, cnt=0, sz;
string s;
string pldrm(){
    if ( i==sz/2 and cnt==sz/2 ) return "Yes";
    if ( i==sz/2 and cnt!=sz/2 ) return "No";
    if ( s[i]==s[sz-1-i] ) cnt++;
    i++;
    return pldrm();
}
int main(){
    cin >> s;
    sz=s.size();
    cout << pldrm();
    return 0;
}