#include <iostream>
using namespace std;
int main(){
    int up=0, lw=0;
    string s;
    cin >> s;
    for ( int i=0; i<s.size(); i++ ){
        if ( islower( s[i] ) ) lw++;
        else if ( isupper( s[i] ) ) up++;
    }
    cout << lw << " " << up;
    return 0;
}