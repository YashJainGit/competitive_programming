#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, m, q;
    cin >> n >> m >> q;

    vector<int> p(n);
    vector<int> e(n);
    vector<int> d(n);

    for (int i=0; i<n; i++){
        p[i] = i;
        e[i] = 1;
    }

    for (int i=0; i<m; i++){    
    
        int a, b;
        cin >> a >> b;
        a--;
        b--;
    
        int pa = p[a];
        while (pa!=p[pa]){
            pa=p[pa];
        }

        int pb = p[b];
        while (pb!=p[pb]){
            pb=p[pb];
        }

        if (pa!=pb){
            if (e[pa]<e[pb]) swap(pa, pb);
            p[pb] = pa;
            e[pa] += e[pb];
            d[pb] = i;
        }
    }

    for (int i=0; i<q; i++){

        int a, b;
        cin >> a >> b;
        a--;
        b--;
        int m=0;
        int pa = p[a];
        while (pa!=p[pa]){
            m = max(m, d[pa]);
            pa=p[pa];
        }

        int pb = p[b];
        while (pb!=p[pb]){
            m = max(m, d[pb]);
            pb=p[pb];
        }
        if (pb!=pa)
            cout << -1 << '\n';
        else
            cout << m << '\n';
    }

}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);

    solve();

    return 0;
}