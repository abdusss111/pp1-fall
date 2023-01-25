#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, l=0;
    cin >> n;
    int a[n];
    for ( int i=0; i<n; i++ ){
        int x;
        cin >> x;
        while ( x%10==0 ) x/=10;
        a[i]= x;
    }
    for ( int i=n/2; i<n; i++ ){
        int rev=a[i];
        int c=-1;
        while ( rev>0 ){
            rev/=10;
            c++;
        }
        int sum = 0;
        while ( a[i]>0 ){
            sum += a[i]%10*pow( 10, c );
            c--;
            a[i]/=10;
        }
        a[i]=sum;
    } 
    while ( l<n-1 ){
        if ( a[l]!=a[n-1] ){
            cout << "NO";
            return 0;
        }
        l++;
        n--;
    }
    cout << "YES";
    }