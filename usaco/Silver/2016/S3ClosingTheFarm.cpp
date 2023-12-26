#include <bits/stdc++.h>

using namespace std;

bool testcases=false;
void solve(){
    int n, m;

    cin >> n >> m;

    vector<int> adj[n];
    bool v[n]={};
    for (int i=0;i<m;i++){
        int x, y;
        cin >> x >> y;

        adj[x-1].push_back(y-1);
        adj[y-1].push_back(x-1);
    }

    int r[n];
    for (int i=0; i<n; i++){
        cin >> r[i];
        r[i]--;
    }


    for (int i=0; i<n; i++){
        vector<int> s;
        s.push_back(r[n-1]);
        fill(v, v+n, 0);
        for (int j=0; j<i; j++){
            v[r[j]]=true;
        }
        int c=i;
        while (!s.empty()){
            int x=s.back();
            s.pop_back();
            if (v[x]){  
                continue;
            }
            v[x]=true;
            c++;

            for (int &k:adj[x]){
                s.push_back(k);
            }
        }
        if (c==n){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    

}


int main(){
    freopen("closing.in", "r", stdin);
    freopen("closing.out", "w", stdout);

    int t=1; 
    if (testcases) cin>>t;
    while(t--) solve();

    return 0;
}