#include <iostream>
using namespace std;
int main(){
    int n, nums=0;
    cin >> n;
    while( n>0 ){
        if( nums%7!=0 ){
            if( nums%2==0 ){
                n-=4;
            }
			if( nums%2==1 ){
                n+=3;
            }
        }
        nums++;
    }
    cout << nums;
    return 0;
}

