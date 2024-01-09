#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, x;
    cin >> n >> x;

    vector<int> p(n);
    for (int &i:p){
        cin >> i;
    } 

    sort(p.begin(), p.end());

    int l=0, r=n-1;
    int g=0;
    while (l<=r){
        if (p[l]+p[r]<=x){
            l++;
        }
        r--;
        g++;
    }
    cout << g << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}