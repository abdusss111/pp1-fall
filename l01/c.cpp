#include <iostream>
using namespace std;
int main(){
    int n ;
    int a, b, c, d;
    cin >> n;
    a = n%2;
    n = n/2;
    b = n%2;
    n = n/2;
    c = n%2;
    n = n/2;
    d = n%2;
    cout << 8*a + 4*b + 2*c + d ;
    return 0;
}