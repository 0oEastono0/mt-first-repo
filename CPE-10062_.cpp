#include<bits/stdc++.h>
using namespace std;

struct charfreq{
    int ascii;
    int freq;
};

bool compare(const charfreq& a,const charfreq& b){
    if(a.freq != b.freq){
        return a.freq < b.freq;
    }
    return a.ascii > b.ascii;
}
int main() {
    string scetance;
    bool first_case = true;
    while (getline(cin, scetance) ) {
        if(!first_case) cout << endl;

        first_case = false;
        int freq[128] = {0};

        for(char c : scetance){
            freq[c]++;
        }

        vector<charfreq> result{};
        for(int i = 32; i <= 127; i++){
            if(freq[i] > 0){
                result.push_back({i , freq[i]});
            }
        }

        sort(result.begin() ,result.end() ,compare);

        for(const auto& item : result){
            cout << item.ascii << " " << item.freq << endl;
        }
    }
    return 0;
}
