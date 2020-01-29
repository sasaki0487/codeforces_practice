#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
	int t,a,b;
	cin >> t;
    vector<ll> v;
    for(ll i = 0 ,sum = 0 ; i < 50000 ; i++){
        sum += i;
        v.push_back(sum);
    }
	while(t--){
        int ans = 0;
	    cin >> a >> b;
        ll num = abs(a-b);
        auto it = lower_bound(v.begin(),v.end(),num);
        if(*it == num || (*it - num) % 2 == 0){ 
            cout << it - v.begin() << endl;
        }
        else if((*(it+1) - num) % 2 == 0){
            cout << 1 + it - v.begin() << endl;
        }
        else{
            cout << 2 + it - v.begin() << endl;
        }
	}
	return 0;
}
