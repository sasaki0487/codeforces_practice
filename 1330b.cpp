// Only two possibe cases. Let mx = largest number in array;
// Case1: index 0 ~ mx-1 , mx ~ end can meet requirement
// Case2: index 0 ~ end - mx , end - mx ~ end can meet requirement
// Note that if mx * 2 == n, 2 Case count as 1 since they are the same.
#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int check(vector<int>& v ,int a , int b){
    set<int> s;
    int f1 = 0,f2 = 0;
    for(int i = 0 ; i < a ; i++){
        s.insert(v[i]);
    }
    if(s.count(1) && s.count(a) && s.size() == a) f1 = 1;
    s.clear();
    for(int i = v.size() - 1 ; i > v.size() - b -1 ; i--){
        s.insert(v[i]);
    }
    if(s.count(1) && s.count(b) && s.size() == b) f2 = 1;
    return f1 & f2;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        vector<int> v(n);
        int mx = -1;
        for(int i = 0 ; i < n ; i++){
            cin >> v[i];
            mx = max(v[i],mx);
        }
        if(mx >= n){
            cout << 0 << endl;
            continue;
        }
        int f1 = 0,f2 = 0;
        f1 = check(v,mx,n-mx);
        if(mx * 2 != n)f2 = check(v,n-mx,mx);
        cout << f1+f2 << endl;
        if(f1) cout << mx << " " << n - mx << endl;
        if(f2) cout << n - mx << " " << mx << endl;
        
        
    }
    return 0;
}
