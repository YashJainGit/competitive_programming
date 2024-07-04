#include <bits/stdc++.h>

using namespace std;
vector<vector<int>> t;
vector<bool> m;

int ms;
int dfs(int i){

    int par = 1;
    m[i] = true;
    for (int j=0; j<t[i].size(); j++){
        if (!m[t[i][j]] && dfs(t[i][j])==1){
            if (par){
                ms++;
            }
            par=0;
            
        }
    }
    //cout << i << ' ' << par << '\n';
    return par;


}
void solve(){
    ms = 0;
    int n;
    cin >> n;

    t.resize(n, vector<int>(0));
    m.resize(n, false);
    for (int i=0; i<n-1; i++){
        int a, b;
        cin >> a >> b;

        t[a-1].push_back(b-1);
        t[b-1].push_back(a-1);
    }

    dfs(0);
    cout << ms << '\n';

}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);

    solve();

    return 0;
}