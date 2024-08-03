#include <bits/stdc++.h>

using namespace std;
using ll=long long;

const bool testcases=false;
const bool filein=true;

const int maxn = 1010;

vector<vector<bool>> farm(2*maxn, vector<bool>(2*maxn, false));

void solve(){

    int x = maxn-1;
    int y = maxn-1;
    int px = x;
    int py = y;
    int ppx= x;
    int ppy = y;
    
    int n;
    cin >> n;

    int ans = 0;
    for (int i=0; i<n; i++){
        char c;
        cin >> c;

        if (c=='N'){
            y++;
        }
        else if (c=='S'){
            y--;
        }
        else if (c=='E'){
            x++;
        }
        else{
            x--;
        }

        if (farm[x][y] && !farm[px][py] && !(ppx==x && ppy==y)){
            ans++;
        }
        //cout << farm[x][y] << '\n';
        farm[px][py] = true;
        ppx = px;
        ppy = py;
        px = x;
        py = y;


    }
    cout << max(0, ans) << '\n';

}


int main(){
    if (filein){
        string f="gates";
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