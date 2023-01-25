#include <iostream>
using namespace std;
int main(){
    string s, t;
    cin >> s >> t;
    int ltrss[26], ltrst[26];
    for ( int i=0; i<26; i++ ){
        ltrss[i]=0;
        ltrst[i]=0;
    }
    for ( int i=0; i<s.size(); i++ ){
        if ( isupper(s[i]) ) ltrss[int(s[i])-65]++;
        else if ( islower(s[i]) ) ltrss[int(s[i])-97]++;
    }
    for ( int i=0; i<t.size(); i++ ){
        if ( isupper(t[i]) ) ltrst[int(t[i])-65]++;
        else if ( islower(t[i]) ) ltrst[int(t[i])-97]++;
    }
    int cnt=0;
    bool ch;
    for ( int i=0; i<26; i++ ){
        if ( ltrss[i]!=ltrst[i] ){
            ch=false;
            break;
        }
        else ch=true;
    }
    if ( ch==true ) cout << "YES";
    else cout << "NO";
    return 0;
}