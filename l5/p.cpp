#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    for ( size_t i=0; i<s.size(); i++ ){
        if ( s[i]=='z' ){
            s[i]='a' ;
            continue;
        }
        s[i]=char(int(s[i])+1);
    }
    for ( size_t i=0; i<s.size(); i++ ){
        cout << s[i];
    }
    return 0;
}