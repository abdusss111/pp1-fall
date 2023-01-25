#include <iostream>
#include <iomanip>
using namespace std;
void percent( int p, int g ){
    double res = g*100;
    cout << setprecision(6);
    cout << res/p;
}
int main(){
    int p, g;
    cin >> p >> g;
    percent( p, g );
    return 0;
}