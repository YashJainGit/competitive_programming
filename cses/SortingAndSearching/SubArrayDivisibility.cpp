#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<int> a(n);

    for (int &i:a){
        cin >> i;
    }   

    vector<int> s(n);
    s[0] = a[0];
    for (int i=1; i<n; i++){
        s[i] = (s[i-1] + a[i])%n;
    }

    for (int i=0; i<n; i++){
        cout << s[i] << ' ';
    }
    cout << '\n';


    
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);

    solve();

    return 0;
}