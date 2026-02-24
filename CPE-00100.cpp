#include<bits/stdc++.h>
using namespace std;
int cal(long long i) {
    int length = 1;
    while (i != 1) {
        if (i % 2 == 0) i /= 2;
        else i = 3 * i + 1;
        length++;
    }
    return length;
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long m, n;
    while (cin >> m >> n) {
        long long temp_m = m;
        long long temp_n = n;
        int length = 0;
        if (temp_m > temp_n) swap(temp_m, temp_n);

        vector<int> cycle_length(temp_n - temp_m + 1);
        for (int i = temp_m; i <= temp_n; i++) {
            cycle_length[i - temp_m] = cal(i);
        }
        sort(cycle_length.begin(), cycle_length.end());
        cout << m << " " << n << " " << cycle_length[temp_n - temp_m] << endl;
        system("pause");
        return 0;
    }
}