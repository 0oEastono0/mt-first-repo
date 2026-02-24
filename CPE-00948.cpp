#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int fib[40] = { 0 , 1 };
    for (int i = 2; i < 40; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    int a, b;
    cin >> a;

    for (int i = 0; i < a; i++) {

        a = -1;
        cin >> b;
        cout << b << " = ";

        int check = 0, base[41] = {};

        for (int j = 39; j >= 2; j--) {

            if (b - fib[j] >= 0) {
                check = 1;

                if (base[j + 1] != 1) {
                    base[j] = 1;
                    b = b - fib[j];
                }
            }
            if (check == 1) {
                cout << base[j];
            }
        }
        cout << " (fib)\n";
    }

    return 0;
}