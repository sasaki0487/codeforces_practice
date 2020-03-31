#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    
    ll q,n,m,t,l,h;
    cin >> q;
    while(q--){
        cin >> n >> m;
        ll mn = m, mx = m, cur = 0;
        int f = 1;
        for(int i = 0 ; i < n ;i++){
            cin >> t >> l >> h;
            mn -= (t - cur);
            mx += (t - cur);
            if(f == 1 && l <= mx && h >= mn){
                mn = max(mn , l);
                mx = min(mx , h);
                cur = t;
            }
            else{
                f = 0;
            }
        }
        if(f == 1){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}
