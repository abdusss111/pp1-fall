#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, ecnt=0, ocnt=0, esum=0, osum=0;
    cin >> n;
    int a[n];
    for ( int i=0; i<n; i++ ) cin >> a[i];
    for ( int i=0; i<n; i++ ){
        if ( a[i]%2!=0 ){
            ocnt++;
            osum+=a[i];
        }
        else{
            ecnt++;
            esum+=a[i];
        }
    }
    cout << "Left hand magic power: " << ecnt*esum << endl << "Right hand magic power: " << ocnt*osum;
    return 0;
}