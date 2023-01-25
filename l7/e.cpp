#include <bits/stdc++.h>
using namespace std;
int n, x=1;
string isitdegr2(){
    if ( x==n ) return "Yes";
    if ( x>n `) return "No";
    x*=2;
    return isitdegr2();
}
int main(){
    cin >> n;
    cout << isitdegr2();
    return 0;
}