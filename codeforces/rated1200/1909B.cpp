#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const bool testcases = true;

void solve(){
    int n;
    cin >> n;

    vector<ll> a(n);
    for (ll &i:a){
        cin >> i;
    }

    long long k=0;
    for (; k<64; k++){
        int x=(a[0]>>k)&1;
        int g=false;
        //cout << k << ": " << x << ',';
        for (int i=1; i<n; i++){
            //cout << ((a[i]>>k)&1) << ',';
            if (((a[i]>>k)&1)!=x){
                g=true;
                break;
            }
        }
        //cout << '\n';
        if (g){
            cout << (1ll<<(k+1)) << '\n';
            //cout <<"\n\n";
            return;
        }
    }
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
