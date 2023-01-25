#include <bits/stdc++.h>
using namespace std;
string s="";
string tobin(int n){
    if( n==0){
        reverse(s.begin(), s.end());
        return s;
    }
    s+=(char(n%2)+48);
    return tobin(n/2);
}
int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    for (int i=0; i<n; i++){
        cout << tobin(a[i]) << endl;
        s="";
    }
    return 0;
}