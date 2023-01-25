#include <bits/stdc++.h>
using namespace std;
int main(){
    set <int> ms;
    int n, x;
    cin >> n;
    for (  int i=0; i<n; i++ ){
        cin >> x;
        ms.insert(x);
    }
    for ( int i : ms ) {
        if ( i%2!=0 ) cout << i << " ";
    }
    return 0;
}
