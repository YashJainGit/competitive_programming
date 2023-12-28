#include <bits/stdc++.h>

using namespace std;

const bool testcases=false;

vector<int> p;
vector<int> s;

void solve(){
    int n, q;
    cin >> n >> q;

    s.resize(n);
    p.resize(n);
    for (int i=0; i<n; i++){
        p[i]=i;
        s[i]=1;
    }
    bool f=1;
    for (int i=0; i<q; i++){
        int a;
        cin >> a;

        int u, v;
        cin >> u >> v;

        if (a==0){

            int pu=p[u];
            while (p[pu]!=pu){
                pu=p[pu];
            }
            int pv=p[v];
            while (p[pv]!=pv){
                pv=p[pv];
            }
            if (s[pv]>s[pu])
                swap(pv, pu);
            p[pv] = pu;
            s[pu] += s[pv];
            //for (int i=0; i<n; i++){
            //    cout << p[i]<< ' ';
            //}
            //cout << '\n';
        }
        else{
            int pu=p[u];
            while (p[pu]!=pu){
                pu=p[pu];
            }
            u=pu;
            int pv=p[v];
            while (p[pv]!=pv){
                pv=p[pv];
            }
            cout << (pu==pv) << '\n';
        }
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