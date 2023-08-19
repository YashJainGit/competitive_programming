#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define llmax LLONG_MAX;
#define llmin LLONG_MIN;

#define rep(x,y,z) for(int x=(y);x<=(z);x++)

void solve(){
    ll n, m;
    cin >> n >> m;

    ll lake[n][m];
    ll v[n][m] = {};
    for (ll i=0; i<n; i++){
        for (ll j=0; j<m; j++){
            cin >> lake[i][j];
        }
    }

    ll mlake=0; 
    for (ll i=0; i<n; i++){
        for (ll j=0; j<m; j++){
            if (v[i][j] || lake[i][j]==0){
                continue;
            }
            ll d=0;
            vector<pair<ll, ll>> s;
            s.emplace_back(i, j);
            ll k=0;
            while (k<s.size()){
                
                ll x = s[k].first;
                ll y = s[k].second;
                //cout << "<" << k << " : " << x << ", " << y << " = " << v[x][y] << ">   ";
                k++;
                if (x<0 || x>=n || y<0 || y>=m || lake[x][y]==0 || v[x][y]){
                   continue; 
                }
                
                d += lake[x][y];
                v[x][y] = true;

                s.emplace_back(x+1, y);
                s.emplace_back(x-1, y);
                s.emplace_back(x, y+1);
                s.emplace_back(x, y-1);
                // cout << s.size() << ':'; 
            }
            // cout << "{v}\n";
            mlake = max(mlake, d);
        }
    } 
    cout << mlake << '\n';
}



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while(t--) solve();
    return 0;
}