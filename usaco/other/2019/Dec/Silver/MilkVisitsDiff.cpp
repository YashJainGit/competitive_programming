#include <bits/stdc++.h>

using namespace std;
using ll=long long;

const bool testcases=false;
const bool filein=false;

const int maxn=1e5+2;
vector<vector<int>> t(maxn, vector<int>());
vector<bool> hg(maxn);
vector<int> p(maxn);
vector<int> s(maxn);


void solve(){
    int n, m;
    cin >> n >> m;

    for (int i=0; i<n; i++){
        char hgc;
        cin >> hgc;
        hg[i] = hgc=='H';
    }

    for (int i=0; i<n-1; i++){
        int a, b;
        cin >> a >> b;
        
    }
    cout << "  ";
    tour(0);
    cout << '\n';
    for (int i:he){
        cout << i << ' ';
    }
    cout << '\n';
    for (int i:ge){
        cout << i << ' ';
    }
    cout << '\n';
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