#include <bits/stdc++.h>

using namespace std;

const bool testcases=true;


void solve(){
    unordered_map<long long, bool> mp;

    int n;
    cin >> n;
    int a[n];
    for (int &i:a){
        cin >> i;
    }
    long long odd=0, even=0;
    for (int i=0; i<n; i++){
        if (i%2==0)
            even+=a[i];
        else
            odd+=a[i];
        
        //cout << even <<' ' << odd << '\n';
        long long diff=even-odd;
        //cout << diff << '\n';
        if (diff==0 || mp.find(diff)!=mp.end()){
            cout << "YES\n";
            return;
        }
        else{
            mp[diff]=true;
        }
    }
    cout << "NO\n";
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);

    int t=1;
    if (testcases) cin >> t;
    while (t--)	solve();

    return 0;
}