#include <bits/stdc++.h>
using namespace std;
string str = "";
int n;
string tobin(string str){
    if (n == 0){
        reverse(str.begin(),str.end());
        return str;
    }
    str+=char((n % 2) + 48 );
    n/=2;
    return tobin(str);
}
int main (){
    cin >> n;
    cout << tobin(str);
}