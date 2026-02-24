#include<bits/stdc++.h>
using namespace std;

void bangla(long long i) {
	if (i >= 10000000) {
		bangla(i / 10000000);
		cout << " kuti";
		i %= 10000000;
	}
	if (i >= 100000) {
		cout << " " << i / 100000 << " lakh";
		i %= 100000;
	}
	if (i >= 1000) {
		cout << " " << i / 1000 << " hajar";
		i %= 1000;
	}
	if (i >= 100) {
		cout << " " << i / 100 << " shata";
		i %= 100;
	}
	if (i > 0) {
		cout << " " << i;
	}
}
int main() {
	long long i;
	int j = 0;
	while (cin >> i) {
		j++;
		cout << setw(4) << j << ".";
		if (i == 0) cout << " 0";
		else bangla(i);
		cout << endl;
	}
}
