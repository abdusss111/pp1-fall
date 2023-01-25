#include <iostream>
using namespace std;
int main(){
    int n, a, d;
    cin >> n >> a >> d;
    if( n+a>d and a+d>n and n+d>a ) cout << "Valid";
    else cout << "Invalid";
    return 0;
}