#include <iostream>
using namespace std;
int main(){
    int w, h, n, x1, y1, x2, y2;
    cin >> w >> h;
    int a[h][w];
    for ( int i=0; i<h; i++ ){
        for ( int j=0; j<w; j++ ){
            a[i][j] = 1;
        }
    }
    cin >> n;
    for ( int k=0; k<n; k++ ){
        cin >> x1 >> y1 >> x2 >> y2;
        for ( int i=y1; i<y2; i++ ){
            for ( int j=x1; j<x2; j++ ){
                a[i][j]=0;
            }
        }
    }
    int sum=0;
    for ( int i=0; i<h; i++ ){
        for ( int j=0; j<w; j++ ){
            sum+=a[i][j];
        }
    }
    cout << sum;
    return 0;
}