#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if( a+b>c and a+c>b and b+c>a ){
    if( a==b or a==c or b==c ) cout << "Yes";
    else cout << "No";
    }
    return 0;
}