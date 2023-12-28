
#include <bits/stdc++.h>

using namespace std;
bool testcases=false;
bool filein=true;

struct rel{
    int u, v;
    int r;
};

void solve(){
    int n, q;
    cin >> n >> q;

    vector<int> p(n);
    vector<int> s(n);
    for (int i=0; i<n; i++){
        p[i] = i;
        s[i] = 1;
    }
    vector<rel> edg(n-1);

    for (rel &i:edg){
        int u, v, r;
        cin>>u>>v>>r;
        u--;
        v--;
        i = {u, v, r};
    }
    sort(edg.begin(), edg.end(), [](rel a, rel b){return a.r>b.r;});

    vector<int> ans(q);
    vector<pair<int, int>> queries(q);
    for (pair<int, int> &i:queries){
        cin >> i.first >> i.second;
        i.second--;
    }
    vector<int> sq(q);
    for (int i=0; i<n; i++){
        sq[i] = i;
    }

    sort(sq.begin(), sq.end(), [&](int a, int b){ return queries[a].first>queries[b].first;});


    int cur = 0;
    for (int sqi:sq){
        pair<int, int> quer = queries[sqi];
        while (cur<n-1 && edg[cur].r >= quer.first){
            int a=edg[cur].u;
            int b=edg[cur].v;

            int bp=p[b], ap=p[a];
            while (ap!=p[ap])
                ap=p[ap];
            while (bp!=p[bp])
                bp=p[bp];
            
            if (bp!=ap){
                if (s[bp]>s[ap]) swap(bp, ap);
                s[ap]+=s[bp];
                p[bp] = ap;   
            }
            cur++;
        }
        int ip = p[quer.second];
        while (ip!=p[ip]){
            ip = p[ip];
        }
        ans[sqi] = s[ip];
    }

    for (int i:ans){
        cout << i-1 << '\n';
    }
}

int main(){
    
    if (filein){
        freopen("mootube.in", "r", stdin);
        freopen("mootube.out", "w", stdout);
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
