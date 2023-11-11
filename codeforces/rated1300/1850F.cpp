#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define llmax LLONG_MAX;
#define llmin LLONG_MIN;
#define mod 1000000007;

#define rep(x,y,z) for(int x=(y);x<=(z);x++)


const bool testcases = true;

int f[200010];

void solve(){
    fill(f, f+200010, 0);
    ll n;
    cin >> n;

    for (ll i=0;i <n; i++){
        ll x;
        cin >> x;
        if (x<200010){
            f[x]++;
        }
    } 

    ll msum = 0;

    for (ll i=1; i<=n; i++){
        ll sum = 0;
        for (ll j=1; j<=sqrt(i); j++){
            if (i%j==0){
                sum+=f[j];
                if (j*j!=i){
                    sum+=f[i/j];
                }
            }   
        }
        msum = max(sum, msum);
    }
    
    cout << msum << '\n';




    
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