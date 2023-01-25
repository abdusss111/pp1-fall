#include <iostream>
using namespace std;
int main(){
	int n, counter=0;
	cin >> n;
	int a[n];
	for ( int i=0; i<n; i++ ){
		cin >> a[i];
		if ( a[i] > 0){
			counter++;
		}
	}
	cout << counter;
}