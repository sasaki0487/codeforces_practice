#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
	int t , n;
	cin >> t;
	while(t--){
	    cin >> n;
        int a,b;
        string ans = "";
        vector<pair<int,int>> v;
        for(int i = 0 ; i < n ; i++){
            cin >> a >> b;
            v.push_back({a,b});
        }
        sort(v.begin(),v.end());
        int x = 0 , y = 0 , f = 0;
        for(auto it:v){
            if(y > it.second){
                f = 1;
                break;
            }
            else{
                string U(it.second - y,'U'),R(it.first - x,'R');
                ans += (R + U);
                x = it.first;
                y = it.second;
            }
        }
        if(f){
            cout << "NO\n";
        }
        else{
            cout << "YES\n" << ans << endl;
        }
	}
	return 0;
}
