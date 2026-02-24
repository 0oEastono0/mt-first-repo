    #include<bits/stdc++.h>
    using namespace std;

    int main() {
        ios::sync_with_stdio(0);
        cout.tie(0);

        int n, m;
        while(cin >> n >> m){
            vector<int> a;
            set <int> s;
            bool boring = false;
            if(n == 0 || m == 0) boring = 1;
            else{
                a.push_back(n);
                int l = 1;
                s.insert(1);
                while(n > 1){
                    if(n % m == 0 ){
                        if (l >= n) break;
                        n /= m;
                        l *= m;
                        a.push_back(n);
                        s.insert(n);
                        if (s.count(l)) break;
                        a.push_back(l);
                        s.insert(l);
                    }
                    else {
                        boring = 1;
                        break;
                    }
                }
            }
            // for(auto i : a){
            //     cout << i << " ";
            // }
            cout << endl;
            if(boring) cout << "Boring!\n";
            else{
                for (auto it : s){
                    cout << it << ' ';
                }
                // sort(a.begin(), a.end());
                // for(auto i : a){
                //     cout << i << " ";
                // }
                cout << endl;
            }
        }
        return 0;
    }