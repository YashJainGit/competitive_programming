#include <bits/stdc++.h>

using namespace std;

const bool testcases=true;

vector<city> cities;
int n, m;
struct city{
    vector<int> adj;
    vector<int> w; // weight
    int b; //bike
};

int dfs(int i, int b){
    if (i==n-1){
        return 0;
    }
}

void solve(){
    cin >> n >> m;

    cities.resize(n);    
    for (int i=0; i<m; i++){
        int u, v, w;
        cin >> u >> v >> w;

        u--;
        v--;

        cities[u].adj.push_back(v);
        cities[u].w.push_back(w);

        cities[v].adj.push_back(u);  
        cities[v].w.push_back(w);
    } 

    for (int i=0; i<n; i++){
        int b;
        cin >> b;

        cities[i].b = b;
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