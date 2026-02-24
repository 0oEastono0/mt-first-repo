#include<bits/stdc++.h>
using namespace std;

int main() {
    long long int S, D;
    while (cin >> S >> D) {
        long long temp = S;
        long long ans = temp;
        while (D > S) {
            temp++;
            S += temp;
            if (S >= D)ans = temp;
        }
        cout << ans << endl;
    }
}