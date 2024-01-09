#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, m;
    cin >> n >> m;

    vector<int> h(n);
    vector<int> t(m);

    for (int &i:h){
        cin >> i;
    }
    for (int &i:t){
        cin >> i;
    }

    sort(h.begin(), h.end());

    for (int i:t){
        int ind = upper_bound(h.begin(), h.end(), i)-h.begin();
        if (ind!=n){
            cout << h[ind] << '\n';
        }
        else{
            cout << -1 << '\n';
        }
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}