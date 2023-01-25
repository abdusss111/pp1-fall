#include <iostream>
using namespace std;
void func( int n ){
    int sum=0;
    while (n > 0){
        sum+=n%10;
        n/=10;
    }
    cout << sum;
}
int main(){
    int n;
    int sum=0;
    cin >> n;
    func( n );
    return 0;
}