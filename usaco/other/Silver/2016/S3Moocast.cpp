
#include <bits/stdc++.h>

using namespace std;

bool testcases=false;
bool filein=true;

void solve(){
    int n;
    cin >> n;
    
    int x[n];
    int y[n];
    int p[n];
    for (int i=0; i<n; i++){
        cin >> x[i] >> y[i] >> p[i];
    }

    vector<int> adj[n];
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            double d = sqrt((double)pow(x[i]-x[j], 2)+(double)pow(y[i]-y[j], 2));
            if (d<=p[i]){
                adj[i].push_back(j);
            }
        }
    }

    bool v[n];
    int mc=0;
    for (int i=0; i<n; i++){
        fill(v, v+n, 0);
        vector<int> s;
        s.push_back(i);
        int c=0;
        while(!s.empty()){
            int x=s.back();
            s.pop_back();
            if (v[x]){
                continue;
            }
            v[x]=true;
            c++;
            for (int j:adj[x]){
                s.push_back(j);
            }
        }
        mc = max(c, mc);
    }
    cout << mc << '\n';
}

int main(){
    if (filein){
        freopen("moocast.in", "r", stdin);
        freopen("moocast.out", "w", stdout);
    }
    else{
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout<<fixed<<setprecision(5);
    }

    int t=1; 
    if (testcases) cin>>t;
    while(t--) solve();

    return 0;
}
