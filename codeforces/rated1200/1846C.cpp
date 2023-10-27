#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define llmax LLONG_MAX;
#define llmin LLONG_MIN;
#define mod 1000000007;

#define rep(x,y,z) for(int x=(y);x<=(z);x++)

const bool testcases = true;
void solve(){
    ll n, m, h;
    cin >> n >> m >> h;
    
    pair<ll, ll> score[n];

    for (ll i=0; i<n ;i++){
        ll b[m];
        for (ll j=0; j<m; j++){
            cin >> b[j];
        }
        sort(b, b+m);
        ll po=0, pe=0, t=0;

        for (ll k=0; k<m; k++){
            t+=b[k];
            if (t>h){
                break;
            }
            po++;
            pe+=t;
        }
        score[i].first = po;
        score[i].second = pe;
    }
    pair<ll, ll> rs = score[0];
    sort(score, score+n, [](pair<ll, ll> a, pair<ll, ll> b){
        if (a.first>b.first){
            return true;
        }else if (a.first==b.first && a.second<b.second){
            return true;
        }else{
            return false;
        }
        });

    for (ll i=0; i<n; i++){
        if (score[i].first == rs.first && score[i].second == rs.second){
            cout << i+1 << '\n';
            break;
        }
    }
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