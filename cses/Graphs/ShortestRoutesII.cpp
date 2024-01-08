#include <bits/stdc++.h>

using namespace std;


struct node{
    vector<int> adj;
    vector<int> cost;   
};
void solve(){
    int n, m, q;
    cin >> n >> m >> q;

    vector<node> v(n);
    for (int i=0; i<m; i++){
        int a, b, c;
        cin >> a >> b >> c;

        v[a].adj.push_back(b);
        v[a].cost.push_back(c);
        v[b].adj.push_back(a);
        v[b].cost.push_back(c);
    }

    for (int i=0; i<q; i++){
        
    }
    
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);

    solve();

    return 0;
}