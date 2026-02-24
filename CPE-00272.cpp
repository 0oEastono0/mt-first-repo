#include<bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    bool quote = true;

    char text;

    while(cin.get(text)){
        if(text == '"') {
            if (quote) {
                cout << "``";
            }
            else {
                cout << "''";
            }

            quote = !quote ;
        }
        else {
            cout << text;
        }
    }
    return 0;
}