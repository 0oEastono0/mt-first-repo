#include<bits/stdc++.h>
using namespace std;

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {1, 0, -1, 1, -1, 1, 0, -1};

int main() {
    int n, m;
    int tm = 1;
    while(cin >> n >> m){
        if(n == 0 && m == 0) break;
        if(tm > 1) cout << "\n";
        
        string mp[n];
        vector<pair <int, int>> v ;
        set<pair <int, int>> s;
        
        for(int i = 0; i < n; i++){
            cin >> mp[i];
            for(int j = 0; j < m; j++){
                if(mp[i][j] == '*'){
                    v.push_back({i, j});
                    s.insert({i, j});
                }
            }
        }
        
        int vis[n][m];
        memset(vis, 0, sizeof(vis));
        for(auto i : v){
            int x = i.first, y = i.second;
            for(int j = 0;j < 8; j++){
                int nx = x + dx[j];
                int ny = y + dy[j];
                if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
                vis[nx][ny]++;
                
            }
        }
        
        cout << "Field #" << tm++ << ":\n";
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(!s.count({i, j})) cout << vis[i][j];
                else cout << "*";
            }
            cout << "\n";
        }
    }
}