#include <bits/stdc++.h>
using namespace std;
string s;
size_t sum=0;
int i=0;
int sumof(string s){
    if ( i==s.size() ) return sum;
    sum+=int(s[i]-48);
    i++;
    return sumof(s);
}
int main(){
    cin >> s;
    cout << sumof(s);
    return 0;
}