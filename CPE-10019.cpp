#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int a, b;
    cin >> a;
    for(int i = 0;i < a; i++){
        cin >> b;
        int num1 = 0, num2 = 0;
        for(int j = b;j > 0; j /= 2){
            if(j % 2 == 1) num1++;
        }

        int hex_b = 0;
        int temp_b = b;
        int power_16 = 1;
        while (temp_b > 0){
            hex_b += (temp_b % 10) * power_16;
            temp_b /= 10;
            power_16 *= 16;
        }
        
        for(int j = hex_b; j > 0;j /= 2){
            if(j % 2 == 1){
                num2++;
            }
        }
        
        cout << num1 << " " << num2 << endl;
    }
}