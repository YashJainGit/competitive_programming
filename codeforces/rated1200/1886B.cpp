#include <bits/stdc++.h>

using namespace std;

const bool testcases=true;

struct point{
    int x;
    int y;
};

double dist(point a, point b){
    return sqrt(pow(a.x-b.x,2)+pow(a.y-b.y,2));
}

void solve(){
    point p, a, b, o;

    cin>>p.x>>p.y>>a.x>>a.y>>b.x>>b.y;
    o.x=0;
    o.y=0;

    double ans = INT_MAX;
    
    ans = min(ans, max(dist(a, o), dist(a, p)));
    ans = min(ans, max(dist(b, o), dist(b, p)));
    ans = min(ans, max(max(dist(a, b)/2, dist(b, p)), max(dist(a,b)/2, dist(o, a))));
    ans = min(ans, max(max(dist(a, b)/2, dist(b, o)), max(dist(a,b)/2, dist(p, a))));
    cout << ans << '\n';
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(10);

    int t=1;
    if (testcases) cin >> t;
    while (t--)	solve();

    return 0;
}