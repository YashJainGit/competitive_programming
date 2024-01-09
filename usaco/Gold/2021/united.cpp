#include <bits/stdc++.h>
using namespace std;

void solve(){

    int n;
    cin >> n;

    vector<int> b(n);

    for (int &i:b){
        cin >> i;
    }

    vector<int> inds(n+1);
    for (int i=0; i<=n; i++){
        inds[i] = -1;
    }

    long long total=0;
    int dupl = -1;
    for (int i=0; i<n; i++){ 
        //cout << inds[b[i]]+2 << ' ' << i+1 << ' ' << i-inds[b[i]]-1 << '\n';
        total += i-max(dupl, inds[b[i]])-1;
        dupl = inds[b[i]];
        inds[b[i]]=i;
        
    }
    cout << total << '\n';

}

int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    
    solve();
    
    return 0;
}