#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    while((a %= b) && (b %= a));
    return a + b;
}

int main() {
    int N;
    cin >> N;
    for(int i = 1;i <= N; i++){
        string S1, S2;
        cin >> S1 >> S2;
        int s1 = 0, s2 = 0;
        for(int j = 0; j < S1.length(); j++){
            s1 *= 2;
            s1 += S1[j] - '0';
        }
        for(int j = 0; j < S2.length(); j++){
            s2 *= 2;
            s2 += S2[j] - '0';
        }
        if(gcd(s1, s2) > 1) cout << "Pair #" << i << ": All you need is love!";
        else cout << "Pair #" << i << ": Love is not all you need!";
        cout << "\n";

    }
}