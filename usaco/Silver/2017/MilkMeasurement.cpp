
#include <bits/stdc++.h>

using namespace std;

bool testcases=false;
bool filein=false;

void solve(){
    int n, g;
    cin >> n >> g;
    
    vector<vector<int>> c(n, vector<int>(3));
    for (int i=0; i<n; i++){
        cin >> c[i][0] >> c[i][1] >> c[i][2];
    }
    sort(c.begin(), c.end(), [&](vector<int> a, vector<int> b){return a[0]<b[0];});
    map<int, int> a;
    int mg = 0;
    for (int i=0; i<n; i++){
        a[c[i][1]] += c[i][2];
        if (a[c[i][1]] > mg){
            mg = a[c[i][1]];
            cnt++;
        }
        if (*max_element(a.begin(), a.end()).seconf!=mg){
            cnt++;

        }
    }
}

int main(){
    
    if (filein){
         string f="measurement";
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
