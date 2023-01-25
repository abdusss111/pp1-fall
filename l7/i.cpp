#include <bits/stdc++.h>
using namespace std;
long long sum=0; 
int sum0(){
    int n;
    cin >> n;
    sum+=n;
    if ( n==0 ) return sum;
    return sum0();
}
int main(){
    cout << sum0();
    return 0;
}