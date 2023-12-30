
#include <bits/stdc++.h>

using namespace std;

bool testcases=false;
bool filein=true;

void solve(){
    int n, t;
    cin >> n >> t;

    vector<int> a(n);

    for (int &i:a){
        cin >> i;
    }

    int l=1, r=n-1;
    int best = INT_MAX;
    while (l<=r){
        int m = l+(r-l)/2;
        int mx_= 0;
        priority_queue<int, vector<int>, greater<int>> pq;
        for (int i=0; i<m; i++){
            pq.push(0);
        }
        for (int i=0; i<n; i++){
            int cur = pq.top()+a[i];
            mx_ = max(mx_, cur);
            pq.push(cur);
            pq.pop();
        }

        if (mx_<=t){
            r=m-1;
            best = m;
        }
        else if (mx_>t){
            l=m+1;
        }
    }

    cout << best << '\n';
}

int main(){
    
    if (filein){
        freopen("cowdance.in", "r", stdin);
        freopen("cowdance.out", "w", stdout);
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
