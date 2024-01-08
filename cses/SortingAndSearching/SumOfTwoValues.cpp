#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, x;
    map<int, int> mp;
    cin >> n >> x;

    vector<int> a(n);
    for (int &i:a){
        cin >> i;
    }
    
    //sort(a.begin(), a.end());
    for (int i=0; i<n; i++){
        if (mp.find(x-a[i])!=mp.end()){
            cout << i+1 << ' ' << mp[x-a[i]]+1;
            return;
        }
        mp[a[i]] = i;
    }
    cout << "IMPOSSIBLE\n";
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);

    solve();

    return 0;
}