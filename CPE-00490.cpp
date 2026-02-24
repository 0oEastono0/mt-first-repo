#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    vector<string> sentences ;
    string line;

    while(getline(cin, line)){
        sentences.push_back(line);
    }

    size_t num_row = sentences.size();

    size_t max_len = 0;
    for (const string& s : sentences){
        if (s.length() > max_len) {
            max_len = s.length();
        }
    }
    for (int i = 0; i < max_len; ++i){
        for (int j = num_row; j > 0; --j){
            const string& current_sentence = sentences[j - 1];

            if(i < current_sentence.length()){
                cout << current_sentence[i];
            } else{
                cout << ' ';
            }
        }
        cout << '\n';
    }
}