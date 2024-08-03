
#include <bits/stdc++.h>

using namespace std;

bool testcases=false;
bool filein=true ;

void solve(){
    int a, b, c;
    cin >> a >> b >> c; 

    vector<int> v={a, b, c};
    sort(v.begin(), v.end());
    a = v[0];
    b = v[1];
    c = v[2];

    int mn = min(b-a, c-b);
    if (a==c-2){
        cout << 0 << '\n';
    }
    else if (mn==2){
        cout << 1 << '\n';
    }else{
        cout << 2 << '\n';
    }

    int mx = max(b-a, c-b);
    cout << mx-1 << '\n';
}

int main(){
    
    if (filein){
        string f="herding";
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
