#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void pifagor( int a, int b ){
    cout << sqrt(a*a+b*b);
}
int main(){
    int a, b;
    cin >> a >> b;
    cout << setprecision(4);
    pifagor(a, b);
    return 0;
}