#include <bits/stdc++.h>

using namespace std;

void solve(){
    
    int n;
    cin >> n;

    map<int, bool> mp;
    vector<int> a(n);

    for (int &i:a){
        cin>>i;
        mp[i]=false;
    }

    int i=0, j=0;
    int l=0, ans=0;
    for (; i<n; i++){
        while (mp[a[i]]){
            mp[a[j]]=false;
            l--;
            j++;
        }
        mp[a[i]]=true;
        l++;
        ans = max(ans, l);
    }

    cout << ans << '\n';
    
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);

    solve();

    return 0;
}