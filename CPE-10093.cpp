#include<bits/stdc++.h>
using namespace std;

int char_trans(char z) {
    if (z >= '0' && z <= '9') return z - '0';
    if (z >= 'A' && z <= 'Z') return z - 'A' + 10;
    if (z >= 'a' && z <= 'z') return z - 'a' + 36;
    return -1;
}
int main() {
    string a;
    while (getline(cin, a)) {
        int sum = 0;
        int min_base = 0;
        for (char b : a) {
            sum += char_trans(b);
            if (char_trans(b) + 1 > min_base) min_base = char_trans(b) + 1;
        }
        int base = min_base;
        while (true) {
            base++;
            if (base > 62) {
                cout << "such number is impossible!\n";
                break;
            }
            else if(sum % (base + 1) == 0){
                cout << base << endl;
                break;
            }
        }


    }
}