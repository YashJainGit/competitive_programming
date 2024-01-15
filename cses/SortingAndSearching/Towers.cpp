#include <bits/stdc++.h>

using namespace std;

void solve(){
    
    int n;
    cin >> n;

    multiset<int> m;

    vector<int> a(n);
    for (int &i:a){
        cin >> i;
    }

    for (int i=0; i<n; i++){
        auto ind = m.upper_bound(a[i]);

        if (ind==m.end()){
            m.insert(a[i]);
        }
        else{
            m.erase(ind);
            m.insert(a[i]);
        }
    }
    cout << m.size() << '\n';


    
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);

    solve();

    return 0;
}