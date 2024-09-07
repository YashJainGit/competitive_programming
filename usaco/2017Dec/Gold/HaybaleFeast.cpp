#include <bits/stdc++.h>

using namespace std;
using ll=long long;
using ull=unsigned long long;

const ll mll = __LONG_LONG_MAX__;
const bool testcases=false;
const bool filein=true;
const string f="hayfeast";
const int maxn = 5001;

void solve(){
    ll n, m;
    cin >> n >> m;

    vector<ll> f(n);
    vector<ll> s(n);

    for (int i=0; i<n; i++){
        cin >> f[i] >> s[i];
    }

    multiset<ll> sp;
    ll fl=0;
    int j=0;
    while (fl<m){
        fl+=f[j];
        sp.insert(s[j]);
        j++;
    }

    ll best = *sp.rbegin();
    for (int i=0; i<n && fl>=m;i++){
        sp.erase(sp.find(s[i]));
        fl-=f[i];
        while (j<n && fl<m){
            fl+=f[j];
            sp.insert(s[j]);
            j++;
        }
        if (fl>=m){
            best = min(best, *sp.rbegin());
        }
    }
    cout << best << '\n';




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