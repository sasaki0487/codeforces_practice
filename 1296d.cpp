// Calculate how many skills needed to gain the point of each monster
// Sort them in ascending order then take them greedily till all taken or ran out of skill

#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    
    int n,a,b,k,hp;
    int ans = 0;
    cin >> n >> a >> b >> k;
    vector<int> v(n);
    for(int i = 0 ; i < n; i++){
        cin >> hp;
        hp -= (hp/(a+b)) * (a+b);
        if(hp == 0) hp = a + b;
        int cnt = hp / a - 1;
        if(hp % a != 0) cnt++;
        else if(cnt < 0) cnt = 0;
        v[i] = cnt;
    }
    sort(begin(v),end(v));
    for(int i = 0 ; i < n && k >= v[i] ; i++){
        k -= v[i];
        ans++;
    }

    cout << ans << endl;
    return 0;
}
