#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define llmax LLONG_MAX;
#define llmin LLONG_MIN;
#define mod 1000000007;

#define rep(x,y,z) for(int x=(y);x<=(z);x++)

const bool testcases = true;
void solve(){
    ll n, m;
    cin >> n >> m;

    ll ones =0;
    ll g[n][m];
    ll zeros = 2;
    for (ll i=0; i<n; i++){
        for (ll j=0; j<m; j++){
            char c;
            cin >> c;
            if (c=='1'){
                g[i][j]=1;
                ones++;
            }else{
                g[i][j]=0;
                zeros=1;
            }
        }
    }
    
    for (ll i=0; i<n; i++){
        for (ll j=0; j<m; j++){
            if (g[i][j]==0){
                if ((i>0 && g[i-1][j]==0) || (j>0 && g[i][j-1]==0) || (i>0 && j>0 && g[i-1][j-1]==0) || (i<n-1 && j>0 && g[i+1][j-1]==0)){
                    zeros=0;
                }
            }
        }
    }
    //cout << ">> " << zeros << " " << ones << '\n';
    cout << ones-zeros << '\n';
    
    
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);
    ll t=1;
    if (testcases) cin >> t;
    while(t--) solve();
    return 0;
}