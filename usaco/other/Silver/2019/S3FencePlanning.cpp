
#include <bits/stdc++.h>

using namespace std;

bool testcases=false;
bool filein=true;

struct cow{
    int x;
    int y;
    vector<int> a;
};

void solve(){
    int n, m;
    cin >> n >> m;
    cow c[n];
    
    for (int i=0; i<n; i++){
        cin >> c[i].x >> c[i].y;
    }

    for (int i=0; i<m; i++){
        int a, b;
        cin >> a >> b;

        c[a-1].a.push_back(b-1);
        c[b-1].a.push_back(a-1);
    }

    bool v[n]={};
    vector<int> s;
    int mp = INT_MAX;
    for (int i=0; i<n; i++){
        if (!v[i]){
            s.push_back(i);
            int x1=c[i].x;
            int y1=c[i].y;
            int x2=c[i].x;
            int y2=c[i].y;
            while (!s.empty()){
                int x=s.back();
                s.pop_back();
                if (v[x]){
                    continue;
                }

                v[x]=true;

                x1 = min(x1, c[x].x);
                x2 = max(x2, c[x].x);
                y1 = min(y1, c[x].y);
                y2 = max(y2, c[x].y);

                for (int z:c[x].a){
                    s.push_back(z);
                }
            }
            int p = 2*(x2-x1+y2-y1);
            mp = min(mp, p);
        }
    }
    cout << mp << '\n';

}

int main(){
    
    if (filein){
        freopen("fenceplan.in", "r", stdin);
        freopen("fenceplan.out", "w", stdout);
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
