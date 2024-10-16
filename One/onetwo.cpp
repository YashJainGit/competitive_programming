#include <bits/stdc++.h>

using namespace std;
using ll=long long;
using ull=unsigned long long;

const bool testcases=true;
const bool filein=false;
const string f="stacking";
const int maxn = 1e5+10;
const int mod = 1e9+7;


void solve(){
    int n, k;
    cin >> n >> k;

    map<int, int> a;
    for (int i=0; i<n; i++){
        int x;
        cin >> x;
        a[x]++;
    }

    vector<pair<int, int>> b;
    for (auto it=a.begin(); it!=a.end(); it++){
        b.push_back({it->first, it->second}); 
    }
   /*
    for (int i=0; i<b.size(); i++){
        cout << b[i].first << ' ' << b[i].second << '\n';
    }

   */ 
    int j=0;
    long cur=0, best=0;
    for (int i=0; i<b.size(); i++){
        cur+=b[i].second;
        if (b[i].first-b[i-1].first>1){
            j=i;
            cur = b[i].second;
        }
        if (b[i].first-b[j].first+1>k){
            cur -= b[j].second;
            j++;
        }
        best = max(cur, best);
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
        cout<<fixed<<setprecision(50);
    }
    int t=1;
    if (testcases) cin >> t;
    while (t--)	solve();

    return 0;
}