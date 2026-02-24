#include<bits/stdc++.h>
using namespace std;

int main() {
    int a;
    if(!(cin >> a)) return 0;

    for(int i = 0;i < a; i++){
        int n = 0;
        cin >> n;
        vector<int> street_number(n);
        for(int j = 0; j < n; j++){
            cin >> street_number[j];
        }
        sort(street_number.begin(),street_number.end());

        int best_location = street_number[(n - 1) / 2];
        int distance = 0;

        for(int j = 0; j < n ;j++){
            distance += abs(street_number[j] - best_location);
        }

        cout << distance << endl;

    }
    
}