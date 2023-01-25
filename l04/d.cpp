#include <iostream>
using namespace std;
int main(){
    int num;
    cin >> num;
    for (int i=0; i<num; i++){
        cout << i << " ";
    }
    cout << endl;
    for (int i=1; i<num; i++){
        for (int j=0; j<num; j++){
            if (j==0) cout << i*1 << " ";
            else cout << i*j << " ";
        }
        cout << "\n";
    }
    return 0;
}
