#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n;
    int min_a = INT_MAX;
    int max_a = INT_MIN;
    cin >> n;
    int a[n];
    for( int i=0; i<n; i++ ){
        cin >> a[i];
        if( a[i] > max_a ){
            max_a = a[i];
        }
        if( a[i] < min_a ){
            min_a = a[i];
        }
    }
    for( int i=0; i<n; i++ ){
        if( a[i] == max_a ){
            a[i] = min_a;
        }
        cout << a[i] << " ";
    }
    return 0;
}