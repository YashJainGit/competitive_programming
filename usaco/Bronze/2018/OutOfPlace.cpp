
#include <bits/stdc++.h>

using namespace std;

bool testcases=false;
bool filein=false;

void solve(){
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i=0; i<n; i++){
        cin >> a[i];
    }

    int b = -1;
    for (int i=1; i<n; i++){
        if (a[i]<a[i-1]){
            b=i;
            break;
        }
    }
    if (b==-1){
        cout << 0 << '\n';
        return;
    }
}

int main(){
    
    if (filein){
         string f="outofplace";
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
