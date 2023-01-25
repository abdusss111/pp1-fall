#include <iostream>
using namespace std;

int main() {
	long long n, y, z=500000, m=0;
	cin >> n;
	while( n>0, z >= 0 ){
		y=n/100*30;
		z=z-y;
		n=n/100*10+n;
		m=m+1;
	}
	cout << m;
	return 0;
}