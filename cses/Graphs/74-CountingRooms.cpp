#include <bits/stdc++.h>

using namespace std;

void solve(){
    
    int n, m;
    cin >> n >> m;

    bool v[n][m] = {};

    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            char x;
            cin >> x;

            if (x=='#'){
                v[i][j] = true;
            }
        }
    }

    vector<pair<int, int>> s;
    int c=0;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if (!v[i][j]){
                c++;
                s.emplace_back(i, j);
                while (s.size()>0){
                    int x = s.back().first;
                    int y = s.back().second;
                    s.pop_back();
                    if (v[x][y] || x<0 || x>=n || y<0 || y>=m){
                        continue;
                    }
                    v[x][y] = true;
                    s.emplace_back(x+1, y);
                    s.emplace_back(x-1, y);
                    s.emplace_back(x, y+1);
                    s.emplace_back(x, y-1);
                }
            }        
        }
    }
    cout << c << '\n';
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);

    solve();

    return 0;
}