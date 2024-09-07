#include <bits/stdc++.h>

using namespace std;
using ll=long long;
using ull=unsigned long long;

const bool testcases=true;
const bool filein=false;
const string f="stacking";
const int maxn = 5001;

struct x{
    bool y0=false, y1=false;
};

void solve(){
    int n;
    cin >> n;

    vector<x> l(n+1);
    int c0=0, c1=0;
    for (int i=0; i<n; i++){
        int a, b;
        cin >> a >> b;
        if (b){
            l[a].y1=1;
            c1++;
        }
        else{
            l[a].y0=1;
            c0++;
        }     
    }
    ll ans = 0;
    for (int i=0;i<=n;i++){
        if (l[i].y0&&l[i].y1){
            ans+=n-2;
        }
        if (i!=0 && i!=n){
            if (l[i].y1&&l[i-1].y0&&l[i+1].y0){
                ans++;
            }
            if (l[i].y0&&l[i-1].y1&&l[i+1].y1){
                ans++;
            }
        }
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
        cout<<fixed<<setprecision(50);
    }
    int t=1;
    if (testcases) cin >> t;
    while (t--)	solve();

    return 0;
}