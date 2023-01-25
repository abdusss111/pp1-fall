#include <bits/stdc++.h>
using namespace std;
int n, x, cnt=0;
string binsearch(int * a){
    if ( a[n]==x) return "Yes";
    if ( n==0 ) return "No"; 
    n=n-1;
    return binsearch(a);
    
}
int main(){
    cin >> n;
    int a[n];
    for ( int i=0; i<n; i++ ) cin >> a[i];
    cin >> x;
    cout << binsearch(a);
    return 0;
}
