// Put all entries in a map(skill,count)
// Retrieve the largest count by max(min(mx,(int)m.size()-1),min(mx-1,(int)m.size()))  
#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        int tmp,mx = 0;
        unordered_map<int,int> m;
        for(int i = 0 ; i < n ; i++){
            cin >> tmp;
            m[tmp]++;
            mx = max(m[tmp],mx);
        }
        cout << max(min(mx,(int)m.size()-1),min(mx-1,(int)m.size())) << endl;
    }
    return 0;
}
