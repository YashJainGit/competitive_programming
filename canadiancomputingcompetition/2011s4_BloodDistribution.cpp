#include <bits/stdc++.h>

using namespace std;

void solve(){
    int b[8];
    int p[8];

    bool c[8][8] = {
        {1, 0, 0, 0, 0, 0, 0, 0}, // O-
        {1, 1, 0, 0, 0, 0, 0, 0}, // O+
        {1, 0, 1, 0, 0, 0, 0, 0}, // A-
        {1, 1, 1, 1, 0, 0, 0, 0}, // A+
        {1, 0, 0, 0, 1, 0, 0, 0}, // B-
        {1, 1, 0, 0, 1, 1, 0, 0}, // B+
        {1, 0, 1, 0, 1, 0, 1, 0}, // AB-
        {1, 1, 1, 1, 1, 1, 1, 1}, // AB+
    };

    for (int &i:b){
        cin >> i;
    }

    for (int &i: p){
        cin >> i;
    }

    int s=0;

    for (int i=0; i<8; i++){
        for (int j=i; j>=0 && p[i]>0; j--){
            if (c[i][j]==true){
                int x = min(p[i], b[j]);
                p[i]-=x;
                b[j]-=x;
                s+=x;
            }
        }
    }
    cout << s << '\n';

}

int main(){
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);
    solve();
}