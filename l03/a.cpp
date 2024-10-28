#include <iostream>
using namespace std;
int main (){
    int n;
    cin >> n;
    int a[n];
    for ( int i = 0; i < n; ++i){
        cin >> a[i];
    }
    for(int i = 0; i < n; ++i){
        if ( a[i] % 2 == 1 )
        {
            cout << a[i] << " ";
        }
    }
    return 0;
}

int a[5];



/*
for(int i = n-1; i <= 0; i--){       
    cout << a[i] << " ";
    }








*/