#include <bits/stdc++.h>

using namespace std;
using ll=long long;
using ull=unsigned long long;

const bool testcases=false;
const bool filein=false;
const string f="stacking";
const int maxn = 2e5+10;

void solve(){
    int t, c;
    cin >> t >> c;

    vector<int> a(t);
    for (int i=0; i<t; i++){
        cin >> a[i];
    }

    string s;
    cin >> s;

    

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