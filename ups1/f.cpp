#include <iostream>
using namespace std;
int main(){
    long long x1, y1, x2, y2, cx, cy;
    cin >> x1 >> y1 >> x2 >> y2 >> cx >> cy;
    if ( x1 <= cx && cx <= x2 && y2 <= cy && cy <= y1 ){
        cout << "yes";
    } else {
        cout << "no";
    }
    return 0;
}