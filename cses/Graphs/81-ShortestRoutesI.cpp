#include <bits/stdc++.h>

using namespace std;

struct path{
    vector<int> go;
    vector<int> c;
};



void solve(){
    int n,m;

    vector<path> adj(n);
    for  (int i=0; i<m; i++){
        int a, b, c;

        cin >> a >> b >> c;
        adj[a].go.push_back(b);
        adj[a].c.push_back(c);
    }

}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);

    solve();

    return 0;
}