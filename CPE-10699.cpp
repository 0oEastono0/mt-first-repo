#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int number = 0;
    while (cin >> number && number != 0) {
        cout << number << " : ";
        vector<int> factors{};
        int count = 0;
        for (int i = 2; i < number + 1; i++) {
            
             if (number % i == 0) {
                 factors.push_back(i);
                 while (number % i == 0) {
                 number /= i;
                 }
             }
        }
        cout << factors.size() << endl;
    }
}