#include <bits/stdc++.h>

using namespace std;
const int maxn = 2e5+1;

vector<int> a(maxn);
vector<int> p(maxn);
vector<int> s(maxn);

vector<vector<int>> t(maxn);
vector<bool> vis(maxn);

void dfs(int i){
    vis[i] = true;
    set<int> 
    for (int j=0; j<t[i].size(); j++){  
        if (!vis[t[i][j]]){
            dfs(t[i][j]);
        }
    }





}

void solve(){

    int n;
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> a[i];
        p[i]=i;
    }

    for (int i=0 ;i<n-1; i++){
        int a, b;
        cin >> a >> b;
        t[a-1].push_back(b-1);
        t[b-1].push_back(a-1);
    }


}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);

    solve();

    return 0;
}