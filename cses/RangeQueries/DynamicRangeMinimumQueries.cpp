#include <bits/stdc++.h>

using namespace std;
using ll=long long;

int MAXN=2e5, n, q;
vector<ll> t(2*MAXN);
void build() {
    for (int i = n - 1; i > 0; i--){
        t[i] = min(t[i<<1],t[i<<1|1]);
    }
}

void update(int p, int value) {
    t[p += n] = value;
    for (; p > 1; p >>= 1){
        t[p>>1] = min(t[p], t[p^1]);
    }
}

ll query(int l, int r) {
    ll ans = INT_MAX;
    for (l+=n, r+=n; l<r; l>>=1, r>>=1) {
        if (l&1){
            ans = min(ans, t[l++]);
        }
        if (r&1){
            ans = min(ans, t[--r]);
        }
    }
    return ans;
}

void solve(){
     
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);

    cin >> n >> q;
    for (int i = 0; i < n; i++){
        cin >> t[n + i];
    }
    build();

    for (int i=0; i<q; i++){
        int x;
        cin >> x;

        if (x==2){

            int a, b;
            cin >> a >> b;

            cout << query(a-1, b) << '\n';
        }
        else{
            int k, u;
            cin >> k >> u;

            update(k-1, u);
        }
    }

    return 0;
}