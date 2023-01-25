

#include <iostream>
using namespace std;
int main(){
    string s;
    string t;
    cin >> s >> t;
    size_t pos = 0;
    pos = s.find(t, pos);
    if(pos == string :: npos){
        cout << "NO";
    }
    else cout << "YES";
    return 0;
}