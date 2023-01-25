#include <iostream>
using namespace std;
void func( int n ){
    int sum=0;
    int m=n;
    while (n > 0){
        sum+=n%10;
        n/=10;
    }
    m%=10;
    if ( sum%m==0 ) cout << "YES";
    else cout << "NO";
}
int main(){
    int n;
    cin >> n;
    func(  n );
    return 0;
}