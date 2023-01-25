
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    if ( n < k )
    {
        cout << 2;
        return 0;
    }
    else if ( k == 2 )
    {
        cout << n;
        return 0;
    }
    else if ( n - k < k )
    {
        cout << 4;
    }
    return 0;
}
