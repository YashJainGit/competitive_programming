#include <bits/stdc++.h>

using namespace std;

bool testcases=false;
bool filein=true;

void solve(){
    int n,m;
    cin>>n>>m;

    vector<bool> open(n);
    vector<bool> ans(n);
    vector<int> p(n);
    vector<int> s(n);
    vector<vector<int>> adj(n);
    int comps=0;

    for (int i=0; i<n; i++){
        p[i] = i;
        s[i] = 1;
    }
    for (int i=0; i<m; i++){
        int u, v;
        cin >> u >> v;

        adj[u-1].push_back(v-1);
        adj[v-1].push_back(u-1);
    }

    vector<int> ord(n);
    for (int &i:ord)
        cin >> i;
    for (int i=n-1; i>=0; i--){
        int b=ord[i]-1;
        open[b] = true;
        comps++;
        for (int &a:adj[b]){
            if (!open[a]){
                continue;
            }
            int pb=p[b], pa=p[a];
            while (pb!=p[pb])
                pb=p[pb];
            while (pa!=p[pa])
                pa=p[pa];

            if (pa!=pb){
                comps--;
                if (s[pa]>s[pb]) swap(pa, pb);
                p[pa] = pb;
                s[pb]+=s[pa];
            }
        }
        ans[i] = comps==1;
    }
    for (bool i:ans)
        cout << (i?"YES\n":"NO\n");

}

int main(){
    
    if (filein){
        freopen("closing.in", "r", stdin);
        freopen("closing.out", "w", stdout);
    }
    else{
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout<<fixed<<setprecision(0);
    }

    int t=1; 
    if (testcases) cin>>t;
    while(t--) solve();

    return 0;
}
