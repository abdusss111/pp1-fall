#include <iostream>
#include <algorithm>
using namespace std;
void func( string s ){
    for(int i=0;i<s.size();i++){
        if(s[i]!='a' and s[i]!='e' and s[i]!='o' and s[i]!='i' and s[i]!='u' and s[i]!='A' and s[i]!='E' and s[i]!='O' and s[i]!='I' and s[i]!='U' ) cout << s[i];
    }
}
int main(){ // a e i o u
    string s;
    getline(cin, s);
    int cnt=0;
    func( s );
    return 0;
}