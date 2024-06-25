#include <bits/stdc++.h>

using namespace std;

struct edge{
    int a, b, c;
};

void solve(){
    int n, m;
    cin >> n >> m;
    
    vector<int> p(n);
    vector<int> s(n);
    for (int i=0; i<n; i++){
        p[i] = i;
        s[i] = 1;
    }

    vector<edge> e(m);
    for (edge &i:e) {
        int a, b, c;
        cin >> a >> b >> c;
        i = {a-1, b-1, c};
    }
    sort(e.begin(), e.end(), [&](edge a, edge b){return a.c<b.c;});
    int used = 0;
    long long total = 0;
    for (int i=0; used<n-1 && i<m; i++){
        int a=e[i].a;
        int b=e[i].b;
        int c=e[i].c;

        while (a!=p[a])
            a = p[a];
        while (b!=p[b])
            b = p[b];

        if (a!=b){
            total += c;
            used++;
            if (s[b]>s[a]) swap(a, b);
            p[b] = a;
            s[a] += s[b];
        }
    }
    
    if (used!=n-1){
        cout << "IMPOSSIBLE\n";
    }
    else{
        cout << total << '\n';
    }



}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);

    solve();

    return 0;
}