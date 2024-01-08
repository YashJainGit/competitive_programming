#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<int> a(n);

    for (int &i:a){
        cin >> i;
    }

    vector<int> ind(n);
    for (int i=0; i<n; i++){
        ind[i] = i;
    }

    sort(ind.begin(), ind.end(), [&](int i, int j){return a[i]<a[j];});

    int g=1;
    for (int i=1; i<n; i++){
        g += ind[i]<ind[i-1];
    }
    cout << g << '\n';
    
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);

    solve();

    return 0;
}