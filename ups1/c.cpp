#include <iostream>
using namespace std;
int main(){
    long long x, y, a, b;
    cin >> x >> y >> a >> b; 
    if( x+y>=a+b and a<=b and x-a>=y-b ) cout << "Yes";// если б больше а и их сумма меньше или равна сумме х и у то Yes 
    else cout << "No";
}