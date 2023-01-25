#include <iostream>
using namespace std;
int main(){
    int n, revn, a, b, c, d;
    cin >> n;
    a=n/1000;
    b=(n-1000*a)/100;
    c=(n-a*1000-b*100)/10;
    d=(n-a*1000-b*100-c*10)/1;
    revn = d*1000+c*100+b*10+a*1;
    if( revn == n )cout << "Yes";
    else cout << "No" << endl;
    return 0;
}