#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n = 1;

    while (cin >> n) {
        bool is_jolly = true;
        vector<int> jolly(n);
        vector<int> array(n - 1);
        
        for (int i = 0; i < n; i++) {
            cin >> jolly[i];
        }
        for (int i = 1; i < n; i++) {
            int a;
            a = abs(jolly[i - 1] - jolly[i]);
            array[i - 1] = a;
        }
		sort(array.begin(), array.end());
        for(int i = 0; i < n - 1; i++) {
            if (array[i] != i + 1) {

                is_jolly = false;
                break;
            }
		}
        if (is_jolly) {
            cout << "Jolly\n";
        }
        else {
            cout << "Not jolly\n";
        }
    }
}