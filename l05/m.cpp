#include <iostream>
using namespace std;
int main(){
    string s;
    int tms, cnt=0;
    char ltr;
    cin >> s >> ltr >> tms;
    for ( size_t i=0; i<s.size(); i++ ){
        if ( s[i]==ltr ) cnt++;
    }
    if ( cnt == tms ) cout << "YES";
    else cout << "NO";
    return 0;
}