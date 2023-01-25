#include <iostream>
using namespace std;
int main(){
    size_t esum=0, osum=0;
    string s;
    cin >> s;
    for ( size_t i=0; i<s.size(); i+=2 ){
        esum += int(s[i])-48;
        osum += int(s[i+1])-48;
    }
    if ( esum==osum ) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}