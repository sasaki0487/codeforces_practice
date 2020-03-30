#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    
    int t,m,n;
    cin >> t;
    while(t--){
        int ans = 0;
        cin >> n >> m;
        vector<int> a(n+1),v(n+1);
        for(int i = 0 ; i < n ; i++){
            cin >> a[i];
            v[a[i]] = i;
        }
        int b,bm = -1;
        for(int i = 0 ; i < m ; i++){
            cin >> b;
            if(v[b] > bm){
                ans += 2 * (v[b] - i);
                bm = v[b];
            }
        }
        cout << ans + m << endl;
    }
    return 0;
}
