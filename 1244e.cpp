#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
	ll n , k;
	cin >> n >> k;
	vector<ll> v(n);
	for(int i = 0  ; i < n ; i++){
		cin >> v[i];
	}
	sort(v.begin(),v.end());
	ll l = v[0],r = v[n-1],lcnt = 0 ,rcnt = 0;
	while(lcnt < n && v[lcnt] == l){
		lcnt++;
	}
	while(rcnt < n && v[n-1-rcnt] == r){
		rcnt++;
	}
	while(k >= 0 && r > l && rcnt < n && lcnt < n){
		if(k < min(rcnt,lcnt))
			break;
		if(lcnt > rcnt){
			ll dif = v[n - rcnt] - v[n - rcnt - 1];
			ll sub = min(k/rcnt,dif);
			k -= rcnt * sub;
			r -= sub;
			while(rcnt < n && v[n-rcnt-1] == r){
				rcnt++;
			}
		}
		else{
			ll dif = v[lcnt] - v[lcnt-1];
			ll sub = min(k/lcnt,dif);
			k -= lcnt * sub;
			l += sub;
			while(lcnt < n && v[lcnt] == l){
				lcnt++;
			}
		}
	}
	cout << r - l << endl;
	return 0;
}
