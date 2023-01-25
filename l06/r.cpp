#include <iostream>
using namespace std;
char toupper( char n ){
    if ( char(65)<=n and char(95)>=n ) return n;
    char N=char(n-32);
    return N;
}
int main(){
    char n;
    cin >> n;
    cout << toupper(n);
    return 0;
}