#include <bits/stdc++.h>

using namespace std;
using ll=long long;
const bool testcases=true;
void solve(){
    int n, x;
    cin >> n >> x;

    vector<ll> a(n);
    for (ll &i:a){
        cin >> i;
    }

    ll hi=1e10;
    ll lo=1;
    ll best=0;
    while (lo<=hi){
        
        ll m=lo+(hi-lo+1)/2;
        //cout << lo << ' ' << hi << " : " << m << '\n';
        unsigned long long w=0;
        for (int i=0; i<n; i++){
            w+=max(m, a[i])-a[i];
        }

        if (w>x){
            hi=m-1;
        }
        else{
            lo=m+1;
            best = m;
        }
    }
    cout << best << '\n';
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