
#include <bits/stdc++.h>

using namespace std;

bool testcases=false;
bool filein=false;

void solve(){
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    for (int &i:a){
        cin >> i;
    }

    for (int i=0; i<n; i++){



    }
    
}

int main(){
    
    if (filein){
         string f="wormsort";
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
