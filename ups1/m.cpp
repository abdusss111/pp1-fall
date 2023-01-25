#include <iostream>
using namespace std;
int main(){
    int n, a, d, sum, an;
    cin >> n >> a >> d;
    for( int i=1; i<=n; i++ ){
        cout << a + (i-1)*d << " ";
    }
    an=a + (n-1)*d;
    sum = n*(a+an)/2;
    cout << endl << "sum: " << sum;
    return 0;
}