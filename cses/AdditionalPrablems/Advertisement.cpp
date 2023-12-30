#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    

    vector<int> a(n);

    for (int &i:a)
        cin >> i;

    a.push_back(0);

    vector<pair<int, int>> st;
    long long best =0 ;;
    for (int i=0; i<=n; i++){
        int j=0;
        while (st.size()>0 && st.back().first>=a[i]){
            j+=st.back().second;
            best = max(best,  (long long)j*st.back().first);
        
            st.pop_back();
        }
        j++;

        st.emplace_back(a[i], j);
    }
    cout << best << '\n';
    
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);

    solve();

    return 0;
}