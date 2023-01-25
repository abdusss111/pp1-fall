#include <iostream>
using namespace std;
int main(){
    int n, mx=0, mi=0;
    cin >> n;
    int a[n][n];
    for ( int i=0; i<n; i++ ){
        for ( int j=0; j<n; j++){ 
            cin >> a[i][j];
        }}
     for ( int i=0; i<n; i++ ){
        for ( int j=0; j<n; j++){ 
            if(a[i][j]>mx) mx=a[i][j];
        }}
        for ( int i=0; i<n; i++ ){
        for ( int j=0; j<n; j++){ 
            if(a[i][j]>mi and a[i][j]!=mx ) mi=a[i][j];
        }}
        cout << mi;
        
}