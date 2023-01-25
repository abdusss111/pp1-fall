#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n, m=1;
int nums(){
    if ( n==m ) return m;
    cout << m << " ";
    m++;
    return nums();
}
int main(){
    cin >> n;
    cout << nums();
    return 0;
}