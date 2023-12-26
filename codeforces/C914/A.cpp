#include <bits/stdc++.h>

using namespace std;

const bool testcases=true;
void solve(){
    int a, b;
    cin >> a >> b;

    int kx, ky;
    cin >> kx >> ky;
    int qx, qy;
    cin >> qx >> qy;

    vector<pair<int, int>> m={
        {a, b},
        {b, a},
        {-a, b},
        {-b, a},
        {-a, -b},
        {-b, -a},
        {a, -b},
        {b, -a},
    };

    int c=0;
    for (int i=0; i<8; i++){
        int x=kx+m[i].first;
        int y=ky+m[i].second;
        for (int j=0; j<8; j++){
            if (x+m[j].first==qx && y+m[j].second==qy){
                c++;
                break;
            }
        }
    }
    if (a==b){
        c/=2;
    }
    cout << c << '\n';
    
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);

    int t=1;
    if (testcases) cin >> t;
    while (t--)	solve();

    return 0;
}