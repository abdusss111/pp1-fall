#include <iostream>
using namespace std;
string symb = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ", res="";
string tokin( int n, int k ){
    if ( n==0 ) return res;
    res=symb[n%k]+res;
    return tokin( n/k, k );
}
int main(){
    int n, k;
    cin >> n >> k;
    cout << tokin( n, k );
    return 0;
}