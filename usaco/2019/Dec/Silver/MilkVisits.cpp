#include <bits/stdc++.h>

using namespace std;
using ll=long long;

const bool testcases=false;
const bool filein=false;

vector<bool> hg;
vector<vector<int>> t;
int k=0;
vector<bool> vis;
vector<int> he={0};
vector<int> ge={0};

void tour(int i){

    vis[i] = true;
    he.push_back(he[k]+(hg[i]));    
    ge.push_back(ge[k]+(!hg[i])); 
    k++;

    cout << i << ' ';
    for (int j=0; j<t[i].size(); j++){

        if (!vis[t[i][j]]){
            tour(t[i][j]);
            
        }
    }
            cout << i << ' ';

    he.push_back(he[k]-(hg[i]));    
    ge.push_back(ge[k]-(!hg[i])); 
    k++;

}

void solve(){
    int n, m;
    cin >> n >> m;

    t.resize(n, vector<int>());
    hg.resize(n, 0);
    vis.resize(n, 0);

    for (int i=0; i<n; i++){
        char hgc;
        cin >> hgc;
        hg[i] = hgc=='H';
    }

    for (int i=0; i<n-1; i++){

        int a, b;
        cin >> a >> b;

        t[a-1].push_back(b-1);
        t[b-1].push_back(a-1);
    }
    cout << "  ";
    tour(0);
    cout << '\n';
    for (int i:he){
        cout << i << ' ';
    }
    cout << '\n';
    for (int i:ge){
        cout << i << ' ';
    }
    cout << '\n';
}


int main(){
    if (filein){
        string f="stacking";
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
    while (t--)	solve();

    return 0;

}