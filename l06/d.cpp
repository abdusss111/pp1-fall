#include <iostream>
using namespace std;
int n, m;
bool findElement(int a[n][m]) { // bolean function
    for (int i = 0; i < n; ++ i) {
        if (a[i] == x)
            return true;
    }
    return false;
}

int main () {
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++ i) {
        cin >> a[i];
    }
    int x;
    cin >> x;
    if (findElement(a, n, x)) {
        cout << "Yes";
    }
    else
        cout << "No";
    return 0;
}