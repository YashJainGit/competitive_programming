
#include <bits/stdc++.h>

using namespace std;

bool testcases=false;
bool filein=false;

void solve(){
    
}

int main(){
    
    if (filein){
         string f="art";
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
