#include <iostream>
using namespace std;
int main(){
    int n, points, stars;
    cin >> n;
    for(int i = 0; i < n; i++){
        points = n - i -1;
        stars = 2 * i + 1;
        for(int j = 0; j < points; j++ ){
            cout << ".";
        }
        for(int j = 0; j < stars; j++ ){
            cout << "*";
        }
        for(int j = 0; j < points; j++ ){
            cout << ".";
        }
        cout << endl;
    }
    return 0;
}