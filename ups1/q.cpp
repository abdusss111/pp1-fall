#include <iostream>
using namespace std;
int main(){
    int m, e, f;
    cin >> m >> e >> f;
    if( m+e>=30 and f>20 and m+e+f>=70 ) cout << "YES!";
    else cout << "NO.";
    return 0;
}
