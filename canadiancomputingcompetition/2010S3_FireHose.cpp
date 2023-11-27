#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;

    int a[n];
    for (int &i:a){
        cin >> i;
    }


    sort(a, a+n);

    int d[n];
    int* p[n];
    for (int i=1; i<n; i++){
        d[i-1] = a[i] - a[i-1];
        p[i-1] = &d[i-1];
    }
    d[n-1] = (1000000-a[n-1])+a[0];
    p[n-1] = &d[n-1];

    sort(p, p+n, [](int *a, int *b){return *a>*b;});

    int k;
    cin >> k;

    if (k>=n){
        cout << 0 << '\n';
        return;
    }
    for (int i:d){
        cout << i << ' ';
    }
    cout << '\n';
    for (int i=0; i<k; i++){
        *p[i] = -1;
    }
    for (int i:d){
        cout << i << ' ';
    }
    cout << '\n';

    int max_s = 0;
    int cur_s = 0;
    for (int i=0; i<n; i++){
        if (d[i]==-1){
            max_s = max(max_s, cur_s);
            cur_s=0;
        }
        else{
            cur_s+=d[i];
        }
    }
    max_s = max(max_s, cur_s);

    cout << ceil(max_s/2.0) << '\n'; 
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();


    return 0;

}