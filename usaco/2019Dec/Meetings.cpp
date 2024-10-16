#include <bits/stdc++.h>

using namespace std;
using ll=long long;
using ull=unsigned long long;

const bool testcases=false;
const bool filein=false;
const string f="milkvisits";
const int maxn = 5001;

struct farm{
    vector<int> nxt;
    bool tp;
    bool v=false;
};
int n, m;
vector<farm> f;
vector<vector<int>> ctp(2, vector<int>());

void dfs(int i){
    if (f[i].v)
    {
        continue;
    }

    ctp[f[i].tp].push_back(ctp[f[i].tp][ctp[0].size() - 1] + 1);
    ctp[!f[i].tp].push_back(ctp[!f[i].tp][ctp[0].size() - 1]);

    for (int j = 0; f[i].nxt.size(); j++)
    {
        stck.push_back(f[i].nxt[j]);
    }

    ctp[f[i].tp].push_back(ctp[f[i].tp][ctp[0].size() - 1] + 1);
    ctp[!f[i].tp].push_back(ctp[!f[i].tp][ctp[0].size() - 1]);
}

void solve(){
    cin >> n >> m;
    f.resize(n);
    for (int i=0; i<n; i++){
        char c;
        cin >> c;
        f[i].tp = c=='H';
    }

    for (int i=0; i<m; i++){
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        f[x].nxt.push_back(y);
        f[y].nxt.push_back(x);
    }

    ctp[0].push_back(0);
    ctp[1].push_back(0);
    


    while (!stck.empty()){
        int i = stck.back();
        stck.pop_back();
    }

    
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