#include <bits/stdc++.h>
using namespace std;
int main(){
    int sum=0;
    string s; 
    cin >> s;
    for ( int i=1; i<s.size(); i++ ) sum+=int(s[i]-48);
    int(s[0]-48)==(sum%10) ? cout << "YES" : cout << "NO";
    return 0;
}