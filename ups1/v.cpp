#include <iostream>
#include <cmath>
using namespace std;
int main(){
    unsigned long long n, power;
    cin >> n;
    for ( int i=0; i<=n; i++ ){
        power = pow(2,i);
        cout << power << endl;
    }
    return 0;
}