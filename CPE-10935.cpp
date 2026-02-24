#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while(cin >> n && n != 0) {
        queue<int> q;
        for(int i = 1; i <= n; i++){
            q.push(i);
        }
        cout << "Discarded cards:";
        for(int i = 0; i < n - 1 ; i++){
            if(i != 0) cout << ", ";
            cout << q.front();
            q.pop();
            q.push(q.front());
            q.pop();
        }
        cout << "\nRemaining card: " << q.front() << "\n";
    }
}