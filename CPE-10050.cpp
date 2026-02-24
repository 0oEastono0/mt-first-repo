#include<bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int T = 0;
    if(!(cin >> T)) return 0;
    for(int i = 0; i < T ; i++){

        int N = 0;
        if(!(cin >> N)) return 0;
        int party = 0;
        if(!(cin >> party)) return 0;
        vector<bool> hartal_day (N + 1, false);
        vector<int> hartal_frequencies(party);

        for(int j = 0; j < party; j++){
            cin >> hartal_frequencies[j];
        }

        for(int h:hartal_frequencies){
            for(int d = 1; d <= N; d++) {
                if(d % h == 0) hartal_day[d] = true; 

            }
        }
        int result = 0;
        
       for(int d = 1; d < N; ++d){
            if(!(d % 7 == 6 || d % 7 == 0)){
                if(hartal_day[d]) result++;
            }
       }


        cout << result << endl;
    }
}