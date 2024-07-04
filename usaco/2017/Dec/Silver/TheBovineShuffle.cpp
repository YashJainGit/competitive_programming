#include <bits/stdc++.h>

using namespace std;
using ll=long long;

const bool testcases=false;
const bool filein=false;
const int maxn = 1e5+1;
vector<int> vis(maxn);



void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &i:a){
        cin >> i;
    }


}


int main(){
    if (filein){
        string f="shiffle";
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