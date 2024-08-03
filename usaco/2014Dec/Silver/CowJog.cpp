#include <bits/stdc++.h>

using namespace std;
using ll=long long;

const bool testcases=false;
const bool filein=true;
const int maxn = 3e5+4;


void solve(){
    ll n, t;
    cin >> n >> t;

    vector<pair<ll,ll>> a(n);
    for (ll i=0;i<n;i++){

        cin >> a[i].first >> a[i].second;
    }

    pair<ll,ll> prev=a[n-1];
    int ans = 1;
    for (ll i=n-2; i>=0; i--){
        if ((prev.first-a[i].first)-t*(a[i].second-prev.second)>0){
            ans++;
            prev = a[i];
        }
    }

    cout << ans << '\n';


}


int main(){
    if (filein){
        string f="cowjog";
        freopen((f+".in").c_str(), "r", stdin);
        freopen((f+".out").c_str(), "w", stdout);
    }
    else{
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout<<fixed<<setprecision(0);
    }

    int t=1;
    if (testcases) cin >> t;
    while (t--)	solve();

    return 0;

}