#include <bits/stdc++.h>
using namespace std;
long long sum=0, n; 
int sum0(){
    sum+=((n%10)/2);
    n/=10;
    if( n==0 ) return sum;
    return sum0();
}
int main(){
    cin >> n;
    cout << sum0();
    return 0;
}