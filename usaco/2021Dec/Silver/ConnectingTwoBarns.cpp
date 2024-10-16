#include <bits/stdc++.h>

using namespace std;
using ll=long long;

const bool testcases=true;
const bool filein=false;
const int nx = 1e5+10;

vector<vector<int>> g(nx, vector<int>());
vector<int> gr(nx, -1);

void solve(){
    fill(g.begin(), g.end(), vector<int>());
    fill(gr.begin(), gr.end(), -1);
    int cur_gr=-1;
    ll n, m;
    cin >> n >> m;

    for (int i=0; i<m; i++){
        int a, b;
        cin >> a >> b;

        g[a-1].push_back(b-1);
        g[b-1].push_back(a-1);
    }

    vector<int> stck;

    for (int i=0; i<n; i++){
        if (gr[i]==-1){
            stck.push_back(i);
            cur_gr++;
        } 
        while (!stck.empty()){
            int j=stck.back();
            stck.pop_back();
            if (gr[j]!=-1){
                continue;
            }
            gr[j] = cur_gr;
            for (int k=0; k<g[j].size(); k++){
                stck.push_back(g[j][k]);
            }
        }
    }

    vector<int> gm0(cur_gr+1, INT_MAX);
    vector<int> gmN(cur_gr+1, INT_MAX);

    vector<ll> min0(n, INT_MAX);
    vector<ll> minN(n, INT_MAX);
    pair<ll,ll > ml = {-INT_MAX, -INT_MAX};
    pair<ll,ll> mr = {INT_MAX, INT_MAX};

    for (ll i=0; i<n; i++){
        if (gr[i]==gr[0]){
            ml.first = max(ml.first, i);
        }
        if (gr[n-i-1]==gr[0]){
            mr.first = min(mr.first, n-i-1);
        }
        if (gr[i]==gr[n-1]){
            ml.second = max(ml.second, i);
        }
        if (gr[n-i-1]==gr[n-1]){
            mr.second = min(mr.second, n-i-1);
        }
        min0[i] = min(min0[i], abs(ml.first-i));
        min0[n-i-1] = min(min0[n-i-1], abs(mr.first-(n-i-1)));
        
        minN[i] = min(minN[i], abs(ml.second-i));
        minN[n-i-1] = min(minN[n-i-1], abs(mr.second-(n-i-1)));
    }

    /*
    for (int i=0; i<n; i++){
        cout << gr[i] << ' ';
    }
    cout << '\n';

    for (int i=0; i<n; i++){
        cout << min0[i] << ' ';
    }
    cout << '\n';

    for (int i=0; i<n; i++){
        cout << minN[i] << ' ';
    }
    cout << '\n';
    */

    for (int i=0; i<n; i++){
        gm0[gr[i]] = min((ll)gm0[gr[i]], min0[i]);
        gmN[gr[i]] = min((ll)gmN[gr[i]], minN[i]);
    }


    long long best = __LONG_LONG_MAX__;
    for (int i=0; i<=cur_gr; i++){
        best = min(best, (ll)gm0[i]*gm0[i] + (ll)gmN[i]*gmN[i]);
    }

    cout << best << '\n';
}

int main(){
    if (filein){
        string f="barn";
        freopen((f+".in").c_str(), "r", stdin);
        freopen((f+".out").c_str(), "w", stdout);
    }
    else{
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout<<fixed<<setprecision(0);
    }

    int t=1;
    if (testcases) cin >> t;
    while (t--) solve();

    return 0;

}