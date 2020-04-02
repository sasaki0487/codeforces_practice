// Distribute the sections equally then add 1 to some machines if the total is not enough
// Sum up the result

#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    
    int t,n,c;
    cin >> t;
    while(t--){
        cin >> c >> n;
        int cnt = n / c;
        int r = n - c * cnt;
        cout <<  (cnt + 1) * (cnt + 1 ) * r + cnt * cnt * (c - r) << endl;
        
    }
    return 0;
}
