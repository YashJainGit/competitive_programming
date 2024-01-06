#include <bits/stdc++.h>

using namespace std;

const bool testcases=true;

vector<int> adj((int)2e5+10);
vector<bool> v((int)2e5+10);

long long dfs(int i){
    if (v[i]){
        return INT_MAX;
    }

    v[i]=true;
    if (adj[i]!=-1){
        return dfs(adj[i])+1;
    }
    else{
        return 1;
    }
}

void solve(){
    int n, k;
    cin >> n >> k;

    fill(v.begin(), v.end(), false);
    fill(adj.begin(), adj.end(), -1);
    vector<int> a(n);

    for (int &i:a){
        cin >> i;
    }

    

    if (dfs(0)>k){
        cout << "Yes\n";
    }
    else{
        cout << "No\n";
    } 
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);

    int t=1;
    if (testcases) cin >> t;
    while (t--)	solve();

    return 0;
}