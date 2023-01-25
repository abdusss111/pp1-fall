#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    long long ca, cb, cc, money;
    cin >> a >> b >> c >> ca >> cb >> cc >> money;
    if ( ca*a + cb*b + cc*c <= money ) cout << "Yes";
    else cout << "No";
    return 0;
}