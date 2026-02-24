#include<bits/stdc++.h>
using namespace std;

int a, b;

bool compare(int c, int d){
    int modc, modd;
    modc = c % b;
    modd = d % b;
    if(modc != modd){
        return modc < modd;
    }
    
    bool oddc, oddd;
    oddc = c % 2 != 0;
    oddd = d % 2 != 0;
    if(oddc != oddd){
        return oddc;
    }
    
    if(oddc){
        return c > d;
    }
    else{
        return c < d;
    }
    
}

int main(){
    while(cin >> a >> b){
        if(a == 0 && b == 0){
            cout << a << " " << b;
            return 0;
        }
        vector<int> list(a);
        for(int i = 0; i < a; i++){
            cin >> list[i];
        }
        sort(list.begin(), list.end(), compare);
        for(int i = 0; i < a; i++){
            cout << list[i] << endl;
        }
    }
}