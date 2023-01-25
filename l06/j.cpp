#include <iostream>
using namespace std;
long long max2( long long a, long long b){
    long long mx=a;
    if ( mx>b ) return mx;
    return b;
}
long long max4( long long a, long long b, long long c, long long d ){
    return max2( max2( a, b ), max2( c, d ) );
}
int main(){
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << max4(a, b, c, d);
    return 0;
}