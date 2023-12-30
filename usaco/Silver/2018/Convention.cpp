
#include <bits/stdc++.h>

using namespace std;

bool testcases=false;
bool filein=false;

void solve(){
    int n, m, c;
    cin >> n >> m >> c;

    vector<int> a(n);
    for (int &i:a){
        cin >> i;
    } 
    sort(a.begin(), a.end());

    int l=0, r=n-1;
    int best = INT_MAX;
    while (l<r){
        int m_t = l+(r-l)/2;
        int prev=0, buses=1;
        for (int i=1; i<n; i++){
            if (i-prev>=c || a[i]-a[prev]>m_t){
                prev=i;
                buses++;
            }
        }
        if (buses>m){
            l=m_t+1;
        }
        else if (
            buses<=m){
            r=m_t;
            best=min(m_t, best);
        }
    }
    cout << best << '\n';
}

int main(){
    
    if (filein){
        string f="convention";
        freopen((f+".in").c_str(), "r", stdin);
        freopen((f+".out").c_str(), "w", stdout);
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
