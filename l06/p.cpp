#include <iostream>
using namespace std;
long long modulo( long long n ){
    long long zero=0; 
    long long modn;
    if ( n>0 ) return n;
    zero = n;
    modn = (n-(zero*2));
    return modn;
}
int main(){
    long long n; 
    cin >> n;
    cout << modulo(n);
    return 0;
}