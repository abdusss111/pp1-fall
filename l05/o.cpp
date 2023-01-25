#include <iostream>
using namespace std;
int main(){
    string s;
    char mx;
    cin >> s;
    for ( size_t i=0; i<s.size(); i++ ){
        if ( int(s[i])>mx ) mx = s[i];
    }
    cout << mx;
    return 0;
}