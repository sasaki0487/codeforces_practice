// Since all number < 1000 can be devided by prime <= 31
// Find the smallest prime factor of all numbers
// Give them colors according to the order of prime used
// Time O(11*N) = O(N)

#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int pm[11] = {2,3,5,7,11,13,17,19,23,29,31};    
    int t,n,tmp;
    cin >> t;
    while(t--){
        cin >> n;
        vector<int> v(n,0);
        int cur = 1;
        int used[11] = {0};
        for(int i = 0 ; i < n ; i++){
            cin >> tmp;
            for(int j = 0 ; j < 12 ; j++){
                if(tmp % pm[j] == 0){
                    if(used[j] == 0){
                        used[j] = cur;
                        cur++;
                    }
                    v[i] = used[j];
                    break;
                }
            }
        }
        cout << cur - 1 << endl;
        for(auto it : v){
            cout << it << " ";
        }
        cout << endl;

    }
    return 0;
}
