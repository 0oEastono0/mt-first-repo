#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n, a, cnt = 0;
	string b;
	int alpha[26] = {};

	cin >> n;

	cin.ignore();

	for (int i = 0; i < n; i++) {

		getline(cin, b);

		for (int j = 0; j < b.size(); j++) {
			a = -1;

			if (b[j] >= 'a' && b[j] <= 'z') {
				a = b[j] - 'a';
			}
			else if (b[j] >= 'A' && b[j] <= 'Z') {
				a = b[j] - 'A';
			}

			if (a != -1) {
				alpha[a]++;
				cnt++;
			}
		}
	}

	for (int i = cnt; i > 0; i--) {
		for (int j = 0; j < 26; j++) {
			if (alpha[j] == i) {
				cout << (char)('A' + j) << " " << i << endl;
			}
		}
	}
}