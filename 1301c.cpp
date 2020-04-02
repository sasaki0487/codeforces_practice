#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    
    ll t,n,m;
    cin >> t;
    while(t--){
        cin >> n >> m;
        ll sum = (n+1) * n / 2;
        ll z = n-m;
        ll tmp = floor(z/(m+1));
        cout << sum - (m+1) * (tmp * (tmp + 1) / 2) - (tmp + 1) * (z % (m+1)) << endl;
    }
    return 0;
}
