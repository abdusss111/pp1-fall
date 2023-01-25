#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    for ( size_t i=0; i<s.size(); i++ ){
        if ( islower(s[i]) ) s[i]=char(s[i]-32);
    }
    cout << s;
    return 0;
}