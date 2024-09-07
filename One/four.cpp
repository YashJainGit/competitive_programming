#include <bits/stdc++.h>

using namespace std;
using ll=long long;
using ull=unsigned long long;

const bool testcases=true;
const bool filein=false;
const string f="stacking";
const int maxn = 5001;

struct key{
    int x;
    bool h;
};

void solve(){
    
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