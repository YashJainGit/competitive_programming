#include <bits/stdc++.h>

using namespace std;
using ll=long long;

const bool testcases=false;
const bool filein=true;
const string f="lazy";
const int maxn = 5001;

void solve(){
    int n, k;
    cin >> n >> k;

    vector<vector<int>> g(n, vector<int>(n+1));

    for (int i=0; i<n; i++){
        for (int j=1; j<=n; j++){
            int x;
            cin >> x;
            g[i][j] = g[i][j-1]+x;
        }
    }

    
    int mx=0;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            int s=0;
            for (int r=max(i-k, 0); r<=min(i+k, n-1); r++){
                  int d = k-abs(r-i);
                  s+=g[r][min(n, j+d+1)]-g[r][max(0, j-d)];
                  //cout << r << ' ' << min(n, j+d+1) << ' ' << max(0, j-d) << '\n';
            }
            mx = max(s, mx);
        }
    }
    cout << mx << '\n';
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