#include <bits/stdc++.h>
using namespace std;

const double pi = acos(-1.0);

int main(){
    double s = 0, a = 0;
    string b ;
    while(cin >> s >> a >> b){
        s += 6440;
        if(b == "min") a /= 60;
        while(a > 360) a -= 360;
        if(a > 180) a = 360 - a;
        double ans1 = 2 * pi * s * a / 360.0;
        double ans2 = sin(a / 2 * pi / 180) * s * 2;
        cout << fixed << setprecision(6) << ans1 << " " 
             << fixed << setprecision(6) << ans2 << endl;
    }
}