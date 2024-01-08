#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);

    for (int i=0; i<n; i++){
        cin >> a[i] >> b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int i=0, j=0; 
    int m=0, t=0;
    while (i<n){
        if (a[i]<b[j]){
            i++;
            t++;
            m = max(t, m);
        }
        else{
            j++;
            t--;
        }
    }
    cout << m << '\n';
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);

    solve();

    return 0;
}