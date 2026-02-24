#include<bits/stdc++.h>
using namespace std;

int main() {
    int swap_times = 0;
    if(!(cin >> swap_times)) return 0;

    for(int i = 0; i < swap_times; i++){

        int count = 0;
        int train_length = 0;
        cin >> train_length;

        if(train_length < 0 || train_length > 50) return 0;

        vector<int> carriage(train_length);

        for(int j = 0; j < train_length; j++){
            if(!( cin >> carriage[j])) break;
        }

        for(int j = 0; j < train_length ; j++){
            for(int k = j + 1; k <train_length ; k++){
                if(carriage[j] > carriage[k]){
                    count++;
                }
            }
        }

        cout << "Optimal train swapping takes " << count << " swaps." << endl;

    }
}