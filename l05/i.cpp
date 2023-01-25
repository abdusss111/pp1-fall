#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int n;
    int a[26];
    for ( int i=0; i<10; i++ ) a[i]=0;
    for ( int i=0; i<s.size(); i++ ){
        
        a[s[i]]++;
    }
    bool ch=true;
    for ( int i=0; i<10; i++ ){
        if ( a[i]!=0 ) n=a[i];
    }
    for ( int i=0; i<s.size(); i++ ){
        if ( a[s[i]]!=n ){
            ch=false;
            break;
        }
        else ch=true;
    }
    //for(int i= 0; i <= 9; i++) cout << a[i]  << ' ';
    if ( ch==true ) cout << "YES";
    else cout << "NO";
    return 0;
}