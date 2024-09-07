#include <bits/stdc++.h>

using namespace std;
using ll=long long;

const bool testcases=false;
const bool filein=true;
string f="cowjog";
const int maxn = 3e5+4;


void solve(){
    ll n, t;
    cin >> n >> t;

    vector<pair<ll,ll>> a(n);
    for (ll i=0;i<n;i++){
        cin >> a[i].first >> a[i].second;
    }

    vector<int> inds(n);
    for (int i=0; i<n; i++) inds[i] = i;

    sort(inds.begin(),inds.end(), [&](int p, int q){
        ll  endp = a[p].first+(t*a[p].second);
        ll  endq = a[q].first+(t*a[q].second);

        if (endp==endq){
            return a[p].first<a[q].first;
        }
        else{
            return endp>endq;
        }});

    set<int> ind = {};
    int ans=0;
    for (int i=0; i<n; i++){
        auto j = ind.lower_bound(inds[i]);
        if (j==ind.end()){ 
            ans++;
        }else{
            ind.erase(j);
        }
        ind.insert(inds[i]);
    }

    cout << ans << '\n';


}


int main(){
    if (filein){
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