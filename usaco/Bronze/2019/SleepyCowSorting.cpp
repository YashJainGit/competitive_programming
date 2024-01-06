
#include <bits/stdc++.h>

using namespace std;

bool testcases=false;
bool filein=true;

void solve(){
    int n;
    cin >> n;

    vector<int> a(n);

    for (int &i:a){
        cin >> i;
    }

    int l=0;

    for (int i=1; i<n; i++){
        if (a[i-1]>a[i]){
            l=i;
        } 
    }

    cout << l << '\n'; 
}

int main(){
    
    if (filein){
         string f="sleepy";
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