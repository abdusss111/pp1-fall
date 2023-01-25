#include <iostream>
using namespace std;
int f(int a, int b){
    int sum = a+b;
    return sum;
}
int main(){
    int n, m;
    cin >> n >> m;
    cout << f(n, m);
    return 0;
}