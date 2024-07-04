#include <bits/stdc++.h>

using namespace std;
using ll=long long;

const bool testcases=false;
const bool filein=false;
const int maxn = 1e6+1;

ll n, m;
vector<pair<int , int>> s;
unordered_map<int , ll> mp;

ll calc(int cur, int i){
    
    if (mp.find(cur) != mp.end()) {
        cout << "seen\n";`
        return mp[cur];
    }

    while (i<n && s[i].second > cur){
        i++;
    }
    if (i>=n){
        return 0;
    }

    int left = (cur - s[i].second + 1);
    int times =  1 + ((left - 1) / s[i].first);

    mp[cur] = 2*times + calc(cur - (times*s[i].first), i+1);
    return mp[cur];
}


void solve(){
    cin >> n >> m;

    vector<int> a(n);
    vector<int> b(n);
    vector<int> c(m);

    for (int &i:a) cin >> i;
    for (int &i:b) cin >> i;
    for (int &i:c) cin >> i;

    s.resize(n, pair<int ,int>());
    for (int i=0; i<n; i++){
        s[i] = {a[i]-b[i], a[i]};
    }

    sort(s.begin(),s.end(), [&](pair<int ,int> p, pair<int  ,int > q){
        if (p.first==q.first){
            return p.second<q.second;
        }
        return p.first<q.first;    
    });

    ll sm=0;
    for (int i=0; i<m; i++){

        sm+=calc(c[i], 0);

    }
    cout << sm << '\n';

}


int main(){
    if (filein){
        string f="stacking";
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