#include<bits/stdc++.h>
using namespace std;

int main() {
    int count_times = 1;
    int N = 0;
    
    while(cin >> N){
        
        while(count_times != 0) {
            if(N > 100) {
                N -= 10;
                count_times--;
            }
            else if(N <= 100) {
                N += 11;
                count_times = 2;
            }
            
        }
        cout << N;
    }
}