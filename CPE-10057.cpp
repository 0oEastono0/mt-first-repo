#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    while(cin >> a && a != 0){
        vector<int> list(a);
        for(int i = 0; i < a; i++){
            cin >> list[i];
        }
        sort(list.begin(), list.end());
        
        int mid = list[( a - 1 ) / 2];
        int mid2 = list[a / 2];
        
        auto low = lower_bound(list.begin(), list.end(), mid);
        auto high = upper_bound(list.begin(), list.end(), mid2);
        
        int dis = distance(low, high);
        int count = mid2 - mid + 1;
        
        cout << mid << " " << dis << " " << count << endl;
        
    }
}