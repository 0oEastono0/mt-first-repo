#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int S = 0;
    if (!(cin >> S)) return 0;
    for (int j = 0; j < S; j++) {
        int N, I;
        double p = 0;
        cin >> N >> p >> I;
        if (p == 0) {
            cout << fixed << setprecision(4) << 0.0 << endl;
            continue;
        }

        double a = p * pow((1 - p), (I - 1));
        double b = 1 - pow(1 - p, N);

        cout << fixed << setprecision(4) << a / b << endl;

    }
}  