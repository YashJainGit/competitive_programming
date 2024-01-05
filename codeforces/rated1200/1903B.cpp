#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const bool testcases = true;

void solve(){
    int n;
    cin >> n;

    for (int i=0; i<n; i++){
        ll x=(1ll<<32)-1;
        for (int j=0; j<n; j++){
            int z;
            cin >> z;
            if (i!=j){
                x&=z;
            }
        }
        cout << x << ' ';
    }
    cout << '\n';
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);
    int t=1;
    if (testcases) cin >> t;
    while(t--) solve();
    return 0;
}
