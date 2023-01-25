#include <iostream>
using namespace std;
string s;
int main() {
	cin >> s;
	int l = 0,r = int(s.size()) - 1;
	int cnt = 0;
	while(r > l) {
		if(s[l] == s[r]) {
			l ++;r --;
		} else {
			cnt ++;
			if(cnt >= 2) {
				cout << "NO";
				exit(0);
			}
			if(s[l + 1] == s[r]) ++ l;
			else if(s[r - 1] == s[l]) -- r;
			else {
				cout << "NO";
				exit(0);
			}
		}
	}
	cout << "YES";
	return 0;
}