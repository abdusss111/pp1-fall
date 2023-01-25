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
    int sum = accumulate(ms.begin(), ms.end(), 0);
    cout << sum;
    return 0;
}
