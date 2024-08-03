#include <bits/stdc++.h>

using namespace std;
using ll=long long;

const bool testcases=false;
const bool filein=true;
const int maxn = 1e5+1;
vector<int> vis(maxn);
vector<int> r;
vector<int> a(maxn);

void dfs(int i){

    if (vis[i]==2){
        return;
    }
    else if (vis[i]==1){
        vis[i]=2;
    }
    else{
        vis[i]=1;
        r.push_back(i);
    }

    dfs(a[i]);
    return;

}

void solve(){
    int n;
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> a[i];
        a[i]--;
    }

    for (int i=0; i<n; i++){
        dfs(i);
        for (int j:r){
            if (vis[j]==1){
                vis[j]=0;
            }
        }
        r.clear();
    }

    int ans=0;
    for (int i=0; i<n; i++){
        ans += vis[i]==2; 
    }
    cout << ans << '\n';

}


int main(){
    if (filein){
        string f="shuffle";
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