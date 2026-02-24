#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	long long n, m;
	while (cin >> n >> m) {
		if (n == 0 && m == 0) return 0;

		int c = 0, operation = 0;
		while (n > 0 || m > 0) {
			if (n % 10 + m % 10 + c  >= 10) {
				c = 1;
				operation++;
			}
			else {
				c = 0;
			}
			n /= 10;
			m /= 10;
		}
		if(operation == 0)
			cout << "No carry operation." << endl;
		else if (operation == 1)
			cout << "1 carry operation." << endl;
		else
			cout << operation << " carry operations." << endl;
	}
}