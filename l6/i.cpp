#include <iostream>
using namespace std;
void func( string s ){
    for ( size_t i=0; i<s.size(); i++ ){
        if ( i%2==0 and islower(s[i])) s[i]=char(int(s[i]-32));
    }
    cout << s;
}
int main(){
    string s;
    cin >> s;
    func(s);
    return 0;
}